#include "CMenu.h"
D3D9Menu	*XFiles	= NULL;

wchar_t *Moptfolder	[]		= { charToWChar("Open"), charToWChar("Close") };
wchar_t *Moptonoff		[]		= { charToWChar("OFF"), charToWChar("ON") };
wchar_t *RespawnX	[] = { L"OFF", L"1 Hit", L"3 Hit", L"F5" };
wchar_t *AimKeyX	[] = { L"OFF", L"L-SHIFT", L"L-CONTROL", L"CAPSLOCK" };
wchar_t *KeyX2		[] = { L"OFF", L"Enemy Down", L"Dead" };

void RebuildMenu()
{
	XFiles->AddFolder(charToWChar("[Visual Hack]"), Moptfolder, &Folders.Visual, 2); 
	if(Folders.Visual) 
	{
		XFiles->AddItem(charToWChar("ESP Names"), Moptonoff, &Visual.ESPNames, 2);
		XFiles->AddItem(charToWChar("ESP Lines"), Moptonoff, &Visual.ESPLines, 2);
		XFiles->AddItem(charToWChar("ESP Bones"), Moptonoff, &Visual.ESPBones, 2);
		XFiles->AddItem(charToWChar("Crosshair"), Moptonoff, &Visual.CrossHair, 2);
		XFiles->AddItem(charToWChar("No FlashBang"), Moptonoff, &Visual.NoFlashBang, 2);
	}
	XFiles->AddFolder(charToWChar("[Player Hack]"), Moptfolder, &Folders.Player, 2); 
	if(Folders.Player) 
	{
		XFiles->AddItem(charToWChar("Aim Lock"), Moptonoff, &Player.AimLock, 2);
		XFiles->AddItem(charToWChar("Aim Key"), AimKeyX, &Player.AimKey, 4);
		XFiles->AddItem(charToWChar("Aim Fire"), Moptonoff, &Player.AimFire, 2);
		XFiles->AddItem(charToWChar("Auto Kill"), KeyX2, &Player.AutoKill, 3);
		XFiles->AddItem(charToWChar("Auto Respawn"), RespawnX, &Player.AutoRespawn, 4);
		XFiles->AddItem(charToWChar("Unlimited Ammo"), Moptonoff, &Player.UnlimitedAmmo, 2);
		XFiles->AddItem(charToWChar("Weapon Accuraccy"), Moptonoff, &Player.WeaponAccuracy, 2);
		XFiles->AddItem(charToWChar("Name Stealer"), Moptonoff, &Player.NameStealer, 2);
	}
}