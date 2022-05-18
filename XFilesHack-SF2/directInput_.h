
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#pragma comment (lib,"dinput8.lib")
#pragma comment (lib,"dxguid.lib")

void WINAPI DI_Term();
BOOL WINAPI DI_Init(HWND g_hwndMain ); //init dinput
HRESULT SetMouseAcquire(); //acquire/unacquire mouse
LPDIRECTINPUT8		g_lpDI;  //direct input object
LPDIRECTINPUTDEVICE8	g_pKeyboard;  //keyboard device
LPDIRECTINPUTDEVICE8 g_pMouse; //mouse device
HANDLE  g_hevtMouse;// mouse event

#define KEYDOWN(key) (keybuffer[key] & 0x80) 

#define DIM_LBUTTON 0
#define DIM_RBUTTON 1
#define DIM_MBUTTON 3


char	keybuffer[256];
bool	KeyPressed[256] = {0};
bool	MousePressed[2] = {0};


void readMouse();
void readKeyboard();

//==================================================
//mouse struct
//==================================================
typedef struct {
	int x;          //x-location of mouse
	int y;          //y-location of mouse
	bool button[2];  //is button 1 held down?
} MOUSE;

MOUSE mouse;

//==================================================
//You must call this function all the time in
//order to read keyboard and mouse input
//==================================================
void readInput()
{
	//read mouse state
	readMouse();

	//read keyboard state
	readKeyboard();

	/*
	//examples of keyboard usage:
	if (KEYDOWN(DIK_A))   dostuff();					 //a-key is held down
	if (KEYDOWN(DIK_ESC)) dosomething();			 //escape is held down
	if (KEYDOWN(DIK_UP))  thrustMyVehicle();   //up-arrow

	//examples of mouse usage:
	drawMouseCursor(mouse.x, mouse.y);
	if (mouse.button1) clickLeft();  //left mouse button is down
	if (mouse.button2) clickRight(); //right mouse button is down
	*/
}


//==================================================
//Read keyboard state
//==================================================
void readKeyboard()
{
	HRESULT hr;  
	
	hr = g_pKeyboard->GetDeviceState(sizeof(keybuffer),(LPVOID)&keybuffer); 
	if FAILED(hr)
	{ 
		
		if (hr==DIERR_INPUTLOST)
		{
			hr = g_pKeyboard->Acquire(); 
		}
		return;
	}  
}

//==================================================
//Read mouse state
//==================================================
void readMouse()
{
  DIDEVICEOBJECTDATA  od;
  DWORD               dwElements;
  HRESULT             hr;

  // Attempt to read one data element.  Continue as long as
  // device data is available.
  while (TRUE)
  {
    dwElements = 1;
    hr = g_pMouse->GetDeviceData(sizeof(DIDEVICEOBJECTDATA), &od, &dwElements, 0);

    //acquire if input device is lost
		if (hr == DIERR_INPUTLOST || hr==DIERR_NOTACQUIRED)
    {
			SetMouseAcquire();
      return;
    }
		
    // Unable to read data or no data available -> exit function, we're done
    if ( FAILED(hr) || dwElements == 0) 
    {
      return;
    }
    
    // look at the element to see what happened
		switch (od.dwOfs) 
    {     
			case DIMOFS_X:	// Mouse horizontal motion 
				mouse.x+=od.dwData;
      break;

      case DIMOFS_Y:	// Mouse vertical motion 
				mouse.y+=od.dwData;
      break;
      
			case DIMOFS_BUTTON0: // Left button pressed or released 
				if ( od.dwData & 0x80 ) mouse.button[0]=TRUE; else mouse.button[0]=FALSE;
			break;
      
			case DIMOFS_BUTTON1: // Right button pressed or released 
				if ( od.dwData & 0x80 ) mouse.button[1]=TRUE; else mouse.button[1]=FALSE;
			break;

			case DIMOFS_BUTTON2: // Middle button pressed or released
				if ( od.dwData & 0x80 ) mouse.button[2]=TRUE; else mouse.button[2]=FALSE;
			break;
    }
  }
}








//==================================================
//You don't have to know what this function does =).
//It's the init.
//==================================================
BOOL WINAPI DI_Init(HWND g_hwndMain ) 
{ 
  HRESULT hr; 
 
  // Create the DirectInput object. 
  hr =  DirectInput8Create(GetModuleHandle(NULL), DIRECTINPUT_VERSION, IID_IDirectInput8, (void**)&g_lpDI, NULL);
	if FAILED(hr) return FALSE; 
 
	//==================================================
	//Keyboard init
	//==================================================
	{
			// Retrieve a pointer to an IDirectInputDevice interface 
			hr = g_lpDI->CreateDevice(GUID_SysKeyboard, &g_pKeyboard, NULL); 
			if FAILED(hr) { DI_Term();return FALSE; } 
 
			// Now that you have an IDirectInputDevice interface, get 
			// it ready to use. 

			// Set the data format using the predefined keyboard data 
			// format provided by the DirectInput object for keyboards. 
			hr = g_pKeyboard->SetDataFormat(&c_dfDIKeyboard); 
			if FAILED(hr) { DI_Term();return FALSE; } 
 
			// Set the cooperative level 
			hr = g_pKeyboard->SetCooperativeLevel(g_hwndMain, 
												 DISCL_FOREGROUND | DISCL_NONEXCLUSIVE); 
			if FAILED(hr) { DI_Term();return FALSE; } 
 
			// Get access to the input device. 
			hr = g_pKeyboard->Acquire(); 
			if FAILED(hr) { DI_Term();return FALSE; } 
	}

	//==================================================
	//Mouse init
	//==================================================
	{
			// Obtain an interface to the system mouse device.
			hr = g_lpDI->CreateDevice( GUID_SysMouse, &g_pMouse, NULL );
			if FAILED(hr) { return FALSE; }

			// Set the data format to "mouse format" - a predefined data format 
			//
			// A data format specifies which controls on a device we
			// are interested in, and how they should be reported.
			//
			// This tells DirectInput that we will be passing a
			// DIMOUSESTATE structure to IDirectInputDevice::GetDeviceState.
			hr = g_pMouse->SetDataFormat( &c_dfDIMouse );
			if FAILED(hr) { return FALSE; }

			// Set the cooperativity level to let DirectInput know how
			// this device should interact with the system and with other
			// DirectInput applications.
			hr = g_pMouse->SetCooperativeLevel( g_hwndMain, 
																					DISCL_EXCLUSIVE | DISCL_FOREGROUND);
			if FAILED(hr) { return FALSE; }

			// create a win32 event which is signaled when mouse data is availible
			g_hevtMouse = CreateEvent( NULL, FALSE, FALSE, NULL );
			if ( NULL == g_hevtMouse ) return FALSE;

			// give the event to the mouse device
			hr = g_pMouse->SetEventNotification( g_hevtMouse );
			if FAILED(hr) { return FALSE; }

			// setup the buffer size for the mouse data
			DIPROPDWORD dipdw;

			dipdw.diph.dwSize = sizeof(DIPROPDWORD);
			dipdw.diph.dwHeaderSize = sizeof(DIPROPHEADER);
			dipdw.diph.dwObj = 0;
			dipdw.diph.dwHow = DIPH_DEVICE;
			dipdw.dwData = 16;

			hr = g_pMouse->SetProperty( DIPROP_BUFFERSIZE, &dipdw.diph );
			if FAILED(hr) { return FALSE; }
	}

  //success
	return TRUE; 
}

//==================================================
//this is for mouse acquiring.. if application is
//not active, you unacquire the mouse until the
//application comes active again
//==================================================
HRESULT SetMouseAcquire()
{
  // nothing to do if g_pMouse is NULL
  if (NULL == g_pMouse) return FALSE;

    g_pMouse->Acquire();


  return TRUE;
}
//==================================================
//Call this function when your program stops
//==================================================
void WINAPI DI_Term() 
{ 
  if (g_lpDI) 
  { 
		if (g_pMouse)
		{
			// Unacquire the device one last time just in case 
			// the app tried to exit while the device is still acquired.
			g_pMouse->Unacquire();
			g_pMouse->Release();
			g_pMouse = NULL;
		}

    if (g_pKeyboard) 
		{ 
 			//Always unacquire the device before calling Release(). 
			g_pKeyboard->Unacquire(); 
			g_pKeyboard->Release();
			g_pKeyboard = NULL; 
    } 

    g_lpDI->Release();
    g_lpDI = NULL; 

		if (g_hevtMouse)
		{
			CloseHandle( g_hevtMouse );
			g_hevtMouse = NULL;
		}
  } 
} 


bool IsKeyboardKeyDownOnce(int Index){
	if((keybuffer[Index] && 0x80)){
		if(KeyPressed[Index] == false){
			KeyPressed[Index] = true;
			return true;
		} else return false;
	} else KeyPressed[Index] = false;
	return false;
}

bool IsMouseKeyDownOnce(int Index){
	if(mouse.button[Index]){
		if(MousePressed[Index] == false){
			MousePressed[Index] = true;
			return true;
		} else return false;
	} else MousePressed[Index] = false;
	return false;
}