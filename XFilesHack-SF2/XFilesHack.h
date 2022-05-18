#define WIN32_LEAN_AND_MEAN
#pragma warning(disable:4244 4996 4700 4099 4172)
//----------------------------------------------------------------------------------------------------------------------------------
#include <windows.h>
//----------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
//-----------------------------------------------------------------------------------------------------------------------------------
#include <fstream>
#include <intrin.h>
#include <process.h>
#include <tchar.h>
#include <stdio.h>
#include <psapi.h>
#include <ShellAPI.h>
#include <sstream>


#pragma comment (lib,"psapi.lib")

#include "SF2-SDK\SdkHeaders.h"

/////////
//Defines
#define RadianToDegree			(Radian)		    (( Radian) * (180.0f / UCONST_Object_Pi))

//////////////////////
//Prototypes & Typedef
void					PostRender(UCanvas* pCanvas);
DWORD					MakePTR(BYTE *MemoryTarget, DWORD FunctionTarget);
void					hookUObject(UObject* obj);
typedef void (__stdcall *tProcessEvent ) ( UFunction*, void*, void* ); //PE Function Prototype


//FILE*					pFile				= NULL;
tProcessEvent			pProcessEvent		= NULL;
UFunction*				pUFunc				= NULL;
void*					pParms				= NULL;
void*					pResult				= NULL; 
UObject*				pCallObject			= NULL;
UObject*				ViewPort			= NULL;
UCanvas*				npCanvas				= NULL;
ASFPlayerController*	pPC					= NULL;
ASFPawn*				pLP					= NULL;
ASFWeapon*				pWeapon				= NULL;
ASFPlayerReplicationInfo* pPRI			= NULL;
static UEngine*			Eng					= NULL;


char					FunctionName[ 256 ];
bool					bInitMenu = false;
float					ClipX,ClipY;
HMODULE					hMyDll;
//-----------------------------------------------------------------------------------------------------------------------------------
using namespace			std;
ofstream				myfile;
DWORD					HookProcessEvent();
static void				SetupExceptionHandler();
void					PlayerLoop(AWorldInfo* WorldInfo);
void					PostRender ( UCanvas* pCanvas );
void					PEHandler(char* func);

#define DIRECTINPUT_VERSION 0x0800

#include "XorSTR.h"
#include "BaseFunctions.h"
#include "GameFunctions.h"
#include "HackingFunctions.h"
#include "Color.h"
#include "ESPFunctions.h"
#include "directInput.h"