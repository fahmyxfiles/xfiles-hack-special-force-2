typedef struct
{
	int Visual;
	int Player;
}tFolders;
typedef struct
{
	int ESPNames;
	int ESPLines;
	int ESPBoxes;
	int ESPBones;
	int CrossHair;
	int NoFlashBang;
}tVisual;

typedef struct
{
	int AimLock;
	int AimKey;
	int AimFire;
	int AutoKill;
	int AutoRespawn;
	int UnlimitedAmmo;
	int WeaponAccuracy;
	int NameStealer;
}tPlayer;

tFolders	Folders;
tVisual	Visual;
tPlayer		Player;