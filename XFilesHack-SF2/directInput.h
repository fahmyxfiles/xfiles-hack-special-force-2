#include <dinput.h>
#pragma comment (lib,"dinput8.lib")
#pragma comment (lib,"dxguid.lib")

LPDIRECTINPUTDEVICE8 Keyboard;
// Method to initialize the keyboard
LPDIRECTINPUTDEVICE8 InitializeKeyboard(HWND hwnd);
void UpdateKeyboard();
void ReadKeyboard();
bool KeyPressed[256] = {0};
char KeyboardState[256];
char* getKeyboardState();    
// Update call


LPDIRECTINPUTDEVICE8 InitializeKeyboard(HWND hwnd)
{
    LPDIRECTINPUT8 p_dx_KeybObject;
    
    DirectInput8Create(GetModuleHandle(NULL), DIRECTINPUT_VERSION, IID_IDirectInput8, (void**)&p_dx_KeybObject, NULL);
    p_dx_KeybObject->CreateDevice(GUID_SysKeyboard, &Keyboard, NULL);

    Keyboard->SetDataFormat(&c_dfDIKeyboard);
    Keyboard->SetCooperativeLevel(hwnd, DISCL_FOREGROUND|DISCL_NONEXCLUSIVE);
    Keyboard->Acquire();

	p_dx_KeybObject->Release();
	p_dx_KeybObject = NULL;
    return Keyboard;
}

void ReadKeyboard()
{
	HRESULT res = Keyboard->GetDeviceState(sizeof(KeyboardState),(LPVOID)&KeyboardState); 
	if FAILED(res)
	{ 
		Keyboard->Release();
		Keyboard = NULL;
	}
}

char* getKeyboardState()
{
    return KeyboardState;
}

void UpdateKeyboard()
{
    ReadKeyboard();
}

bool GetKeyboardPressState(int nIndex)
{
    return (KeyboardState[nIndex] && 0x80);
}

bool IsKeyboardKeyDownOnce(int Index){
	if(GetKeyboardPressState(Index)){
		if(KeyPressed[Index] == false){
			KeyPressed[Index] = true;
			return true;
		} else return false;
	} else KeyPressed[Index] = false;
	return false;
}