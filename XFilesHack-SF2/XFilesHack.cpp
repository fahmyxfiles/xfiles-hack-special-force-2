#include "XFilesHack.h"
#include "MenuStruct.h"
#include "Menu.h"


DWORD Tick = NULL;
FString Name;

void NameStealer(APawn* Player)
{
	if (Player && Player->PlayerReplicationInfo && pPC->Pawn && pPC->Pawn->PlayerReplicationInfo)
	{
		if (Tick <= GetTickCount())
		{
			Name = Player->PlayerReplicationInfo->PlayerName;

			pPC->SetName(Name);

			Tick = GetTickCount() + 4000;
		}
	}
}
void LogBoneName(APawn *Target)
{
	for (int i = 0; i < 200; i++)
	{
		FName boneName = Target->Mesh->GetBoneName(i);
		char Output[200];
		sprintf( Output,"%s(%d)",boneName.GetName(),i);
		myfile << Output << endl;
	}
}
void AutoKill(UCanvas* pCanvas)
{
	if (pPC == NULL || pPC->Pawn == NULL || pPC->Pawn->WorldInfo == NULL)return; 
	APawn* Player = pPC->Pawn->WorldInfo->PawnList; 
	while (Player != NULL){
		if (Player && Player != pPC->Pawn && Player->Health>0 && pPC->Pawn->Health>0 && !pPC->Pawn->bPendingDelete && !pPC->Pawn->bHidden && !Player->bPendingDelete && !Player->bHidden && Player->IsAliveAndWell() && Player->PlayerReplicationInfo && Player->Mesh){
			bool bIsSame = Player->eventIsSameTeam(pPC->Pawn);

			//========================= AUTOKILL ENEMIES =========================
			FSFTakeHitInfo hitInfoTeam;
			hitInfoTeam.Damage			= 1000;
			hitInfoTeam.DamagedBy		= pPC->Pawn;
			hitInfoTeam.DamageType		= USFDmgType_Car::StaticClass();
			hitInfoTeam.HitBone			= Player->Mesh->GetBoneName(14);
			hitInfoTeam.HitBoneIndex	= 14;
			hitInfoTeam.HitLocation		= Player->Mesh->GetBoneLocationByIndex(14, 0);
			hitInfoTeam.HitType			= 0;
			hitInfoTeam.WeaponID		= 0; 
			if (!bIsSame){
				pPC->ServerRequestDamageForProjectile((ASFPawn*)Player, hitInfoTeam, pPC->Pawn);
			}
			//======================================= END =========================
		} 
		Player = Player->NextPawn;
	}
}
void AutoHit(UCanvas* pCanvas)
{
	if (pPC == NULL || pPC->Pawn == NULL || pPC->Pawn->WorldInfo == NULL)return; 
	APawn* Player = pPC->Pawn->WorldInfo->PawnList; 
	while (Player != NULL){
		if (Player && Player != pPC->Pawn && Player->Health>40 && pPC->Pawn->Health>0 && !pPC->Pawn->bPendingDelete && !pPC->Pawn->bHidden && !Player->bPendingDelete && !Player->bHidden && Player->IsAliveAndWell() && Player->PlayerReplicationInfo && Player->Mesh){
			bool bIsSame = Player->eventIsSameTeam(pPC->Pawn);

			//========================= AUTOKILL ENEMIES =========================
			FSFTakeHitInfo hitInfoTeam2;
			hitInfoTeam2.Damage			= 3;
			hitInfoTeam2.DamagedBy		= pPC->Pawn;
			hitInfoTeam2.DamageType		= USFDmgType_Car::StaticClass();
			hitInfoTeam2.HitBone		= Player->Mesh->GetBoneName(39);
			hitInfoTeam2.HitBoneIndex	= 39;
			hitInfoTeam2.HitLocation	= Player->Mesh->GetBoneLocationByIndex(39, 0);
			hitInfoTeam2.HitType		= 0;
			hitInfoTeam2.WeaponID		= 0; 
			if (!bIsSame){
				pPC->ServerRequestDamageForProjectile((ASFPawn*)Player, hitInfoTeam2, pPC->Pawn);
			}
			//======================================= END =========================
		} 
		Player = Player->NextPawn;
	}
}
void PlayerLoop(AWorldInfo* WorldInfo)
{

	APawn* Target = (APawn*)WorldInfo->PawnList;
	while (Target != NULL)
	{
		if(!Target->bDeleteMe && Target != pPC->Pawn && !Target->bHidden && Target->Health > 0)
		{
			if(Target->PlayerReplicationInfo && pPC->Pawn->PlayerReplicationInfo)
			{
				if (pPC->Pawn->PlayerReplicationInfo->Team && Target->PlayerReplicationInfo->Team != NULL)
				{
					if(IsEnemy(pPC->Pawn,Target)){
						//LogBoneName(Target);
						if(Visual.ESPNames)ShowESPNames(Target);
						if(Visual.ESPLines)ShowESPLine(Target);
						if(Visual.ESPBones)ShowESPBone(Target);
						if(Player.NameStealer)NameStealer(Target);
					}
				}
			}
		} 
		Target = Target->NextPawn;
	}

}
void DrawCrossHair(UCanvas* pCanvas)
{
    pCanvas->Draw2DLine(pCanvas->ClipX/2 -15,pCanvas->ClipY/2, pCanvas->ClipX/2 +15 ,pCanvas->ClipY/2,Blue);
    pCanvas->Draw2DLine(pCanvas->ClipX/2 ,pCanvas->ClipY/2 -15, pCanvas->ClipX/2 ,pCanvas->ClipY/2 +15,Blue);
}
void PostRender ( UCanvas* pCanvas ) 
{

	if(!pCanvas)return;
	npCanvas = pCanvas;

	ClipX = pCanvas->ClipX; 
	ClipY = pCanvas->ClipY;

	if(Eng == NULL)Eng = (UEngine*)GetInstanceOf(UEngine::StaticClass());
	if(!Eng)return;

	if(Keyboard == NULL)InitializeKeyboard(GetForegroundWindow());
	if(Keyboard > NULL)UpdateKeyboard();
	if(!bInitMenu){
		XFiles = new D3D9Menu();
		bInitMenu = true;
	}

	if(!bInitMenu)return;


	
	if(XFiles->Mmax == 0)RebuildMenu();
	XFiles->MenuShow(20,50,pCanvas);
	XFiles->MenuNav();
	



	if (Eng && Eng->GamePlayers.Data && Eng->GamePlayers.Num() > 0 && Eng->GamePlayers.Data[0])
	{
		if (Eng->GamePlayers.Data[0]->Actor)
		{
			pPC = (ASFPlayerController*)Eng->GamePlayers.Data[0]->Actor;
		}
	}
	if (pPC && pPC->Pawn && pPC->Pawn->IsAliveAndWell()) 
	{

		if (pPC->IsA(ASFPlayerController::StaticClass())) 
		{

			if(Visual.CrossHair)DrawCrossHair(pCanvas);
			pLP = (ASFPawn*)pPC->Pawn;
			pWeapon = (ASFWeapon*)(pPC->Pawn->Weapon); 
			if(pWeapon){
				if(Player.UnlimitedAmmo){
					pPC->ServerToggleInfiniteAmmo();
					pPC->ServerToggleInfiniteMagazine();
					if(pLP->GetSFWeapon())pLP->GetSFWeapon()->ShotCost.Data[pLP->GetSFWeapon()->CurrentFireMode] = 0;
				}	
			}
			if(Player.WeaponAccuracy)WeaponAccurancy();
			if(Visual.NoFlashBang)NoFlashBang();
			if (Player.AutoRespawn == 1){
				if (pPC->Pawn->Health<99){
					pPC->InstanceRespawn();
					pPC->ServerInstanceRespawn(0);
				}
			}
			if (Player.AutoRespawn == 2){
				if (pPC->Pawn->Health<50){
					pPC->InstanceRespawn();
					pPC->ServerInstanceRespawn(0);
				}
			}
			if (Player.AutoRespawn == 3){
				if (IsKeyboardKeyDownOnce(DIK_F5)) {
					pPC->InstanceRespawn();
					pPC->ServerInstanceRespawn(0);
				}
			}
			if(Player.AutoKill == 1)
				AutoHit(pCanvas);
			if(Player.AutoKill == 2)
				AutoKill(pCanvas);

			if(pPC->Pawn->PlayerReplicationInfo && pPC->Pawn->PlayerReplicationInfo->Team)
			{
				pPRI = (ASFPlayerReplicationInfo*)(pPC->Pawn->PlayerReplicationInfo);
				if(pPC->Pawn->WorldInfo)
				{
					PlayerLoop(pPC->Pawn->WorldInfo);
					if(Player.AimLock){
						APawn* Target = GetAimPriority(pPC->Pawn->WorldInfo);
						if(Target && pPC->Pawn->Health > 0){
							FName boneName = Target->Mesh->GetBoneName(14);
							FVector boneLoc = Target->Mesh->GetBoneLocation(boneName, 0);
							bool result = true;
							if(Player.AimKey > 0)
							{
								int dwKey = 0;
								switch(Player.AimKey)
								{
								case 1:
									dwKey = DIK_LSHIFT;
									break;
								case 2:
									dwKey = DIK_LCONTROL;
									break;
								case 3:
									dwKey = DIK_CAPSLOCK;
									break;
								}
								result = GetKeyboardPressState(dwKey);
							}
							if(result)
								AimAtVector(boneLoc);
							if (Player.AimFire && pLP->GetSFWeapon()){ 
								pLP->GetSFWeapon()->CustomFire();
								pLP->GetSFWeapon()->FireAmmunition();
							}
						}
					}
				}
			}

		}

	}




}
void PEHandler(char* func)
{
	if (!strcmp(func, /*Function Engine.GameViewportClient.PostRender*/XorStr<0x5B,46,0x942ADD81>("\x1D\x29\x33\x3D\x2B\x09\x0E\x0C\x43\x21\x0B\x01\x0E\x06\x0C\x44\x2C\x0D\x00\x0B\x39\x19\x14\x05\x03\x1B\x07\x02\x34\x14\x10\x1F\x15\x08\x53\x2E\x10\xF3\xF5\xD0\xE6\xEA\xE1\xE3\xF5"+0x942ADD81).s)) 
	{
		PostRender(((UGameViewportClient_eventPostRender_Parms*)pParms)->Canvas);  
	}
}
void __declspec(naked) hkProcessEvent ()
{
	__asm mov pCallObject, ecx;
	__asm
	{
		push eax
			mov eax, dword ptr [esp + 0x8]
		mov pUFunc, eax
			mov eax, dword ptr [esp + 0xC]
		mov pParms, eax
			mov eax, dword ptr [esp + 0x10]
		mov pResult, eax
			pop eax
	} 

	_asm pushad 




	if ( pUFunc ) 
	{
		PEHandler(pUFunc->GetFullName());

	}


	__asm popad
	__asm
	{
		push pResult
			push pParms
			push pUFunc
			call pProcessEvent

			retn 0xC
	} 

}

//===============================================================================================================================

BYTE TempGVC[0x2000];

DWORD WINAPI HookProcessEvent(LPVOID param)
{
	HWND hWnd = NULL;
	bool bWindowReady = false;
	while(!bWindowReady)
	{
		hWnd = FindWindow("LaunchUnrealUWindowsClient","Special Force 2");
		if(!hWnd)hWnd = FindWindow("LaunchUnrealUWindowsClient","SpecialForce2");
		if(hWnd != NULL){
			Sleep(60000);
			bWindowReady = true;
		}
		Sleep(0);
	}

	DWORD Object = (DWORD)UObject::FindObject<UObject>(/*SFGameViewportClient Transient.SFGameEngine.SFGameViewportClient*/XorStr<0xAB,65,0xFBED14B2>("\xF8\xEA\xEA\xCF\xC2\xD5\xE7\xDB\xD6\xC3\xC5\xD9\xC5\xCC\xFA\xD6\xD2\xD9\xD3\xCA\x9F\x94\xB3\xA3\xAD\xB7\xAC\xA3\xA9\xBC\xE7\x99\x8D\x8B\xAC\xA3\xAA\x95\xBF\xB5\xBA\xBA\xB0\xF8\x84\x9E\x9E\xBB\xB6\xB9\x8B\xB7\xBA\x97\x91\x8D\x91\x90\xA6\x8A\x8E\x8D\x87\x9E"+0xFBED14B2).s);
	unsigned long TargetCopy = *(unsigned long*)Object;
	for(int i = 0; i<0x2000;i++)*(BYTE*)( TempGVC + i ) = *(BYTE*)(TargetCopy + i );
	pProcessEvent = (tProcessEvent)MakePTR((PBYTE)(TempGVC + 0x114),(DWORD)hkProcessEvent);
	MakePTR((PBYTE)(Object),(DWORD)TempGVC);
	MessageBeep(MB_ICONEXCLAMATION);


	return 0;
}




BOOL WINAPI DllMain ( HMODULE hModule, DWORD dwReason, LPVOID lpReserved )
{
	hMyDll = hModule;
	myfile.open("C:\\SF2.log");
	myfile.clear();
	if ( dwReason == DLL_PROCESS_ATTACH )   {
		CreateThread ( NULL, 0, ( LPTHREAD_START_ROUTINE ) HookProcessEvent, 0, 0, NULL );   

	}
	return TRUE;
}