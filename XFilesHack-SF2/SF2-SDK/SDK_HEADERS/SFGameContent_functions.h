/*
#############################################################################################
# Special Force 2 (1.0.168935.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFGameContent_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function SFGameContent.SFCItem_Char_Face_Meiden.PostApplyItemInternal
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )
// unsigned long                  bUsePenalty                    ( CPF_Parm )

void USFCItem_Char_Face_Meiden::PostApplyItemInternal ( class AActor* AppliedActor, unsigned long bUsePenalty )
{
	static UFunction* pFnPostApplyItemInternal = NULL;

	if ( ! pFnPostApplyItemInternal )
		pFnPostApplyItemInternal = (UFunction*) UObject::GObjObjects()->Data[ 132246 ];

	USFCItem_Char_Face_Meiden_execPostApplyItemInternal_Parms PostApplyItemInternal_Parms;
	PostApplyItemInternal_Parms.AppliedActor = AppliedActor;
	PostApplyItemInternal_Parms.bUsePenalty = bUsePenalty;

	this->ProcessEvent ( pFnPostApplyItemInternal, &PostApplyItemInternal_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_PPAllStarWhite.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_PPAllStarWhite::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 132572 ];

	USFCItem_Common_Shirts_PPAllStarWhite_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_PPAllStarFlag.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_PPAllStarFlag::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 132581 ];

	USFCItem_Common_Shirts_PPAllStarFlag_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_PHBlack.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_PHBlack::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 132587 ];

	USFCItem_Common_Shirts_PHBlack_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_ChickenBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChickenBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 132593 ];

	USFCItem_Common_ChickenBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_ChickenPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChickenPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 132599 ];

	USFCItem_Common_ChickenPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_ChickenBody.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChickenBody::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 132605 ];

	USFCItem_Common_ChickenBody_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_ChickenMask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChickenMask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 132614 ];

	USFCItem_Common_ChickenMask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCWeaponRIS_ActionCamo_Kill.OwnerKill
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFCWeaponRIS_ActionCamo_Kill::OwnerKill ( )
{
	static UFunction* pFnOwnerKill = NULL;

	if ( ! pFnOwnerKill )
		pFnOwnerKill = (UFunction*) UObject::GObjObjects()->Data[ 132819 ];

	USFCWeaponRIS_ActionCamo_Kill_execOwnerKill_Parms OwnerKill_Parms;

	this->ProcessEvent ( pFnOwnerKill, &OwnerKill_Parms, NULL );

	return OwnerKill_Parms.ReturnValue;
}

// Function SFGameContent.SFCWeaponRIS_ActionCamo_Equip.OwnerAttached
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFCWeaponRIS_ActionCamo_Equip::OwnerAttached ( )
{
	static UFunction* pFnOwnerAttached = NULL;

	if ( ! pFnOwnerAttached )
		pFnOwnerAttached = (UFunction*) UObject::GObjObjects()->Data[ 132853 ];

	USFCWeaponRIS_ActionCamo_Equip_execOwnerAttached_Parms OwnerAttached_Parms;

	this->ProcessEvent ( pFnOwnerAttached, &OwnerAttached_Parms, NULL );

	return OwnerAttached_Parms.ReturnValue;
}

// Function SFGameContent.SFCItem_Common_SmartTelecom.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SmartTelecom::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 132985 ];

	USFCItem_Common_SmartTelecom_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_MonkeyBackPack.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_MonkeyBackPack::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133021 ];

	USFCItem_Common_MonkeyBackPack_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_MechanixGlove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_MechanixGlove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133027 ];

	USFCItem_Common_MechanixGlove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Ghoulmask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Ghoulmask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133040 ];

	USFCItem_Common_Ghoulmask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shorts_Blue.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shorts_Blue::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133047 ];

	USFCItem_Common_Shorts_Blue_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shorts_Red.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shorts_Red::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133057 ];

	USFCItem_Common_Shorts_Red_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Towel_Crocodile.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Towel_Crocodile::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133070 ];

	USFCItem_Common_Towel_Crocodile_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_ProvideFastC4.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_ProvideFastC4::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 133103 ];

	USFCItem_Func_ProvideFastC4_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_ProvideFastC4.IsPossibleToUse
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

bool USFCItem_Func_ProvideFastC4::IsPossibleToUse ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnIsPossibleToUse = NULL;

	if ( ! pFnIsPossibleToUse )
		pFnIsPossibleToUse = (UFunction*) UObject::GObjObjects()->Data[ 133104 ];

	USFCItem_Func_ProvideFastC4_execIsPossibleToUse_Parms IsPossibleToUse_Parms;
	IsPossibleToUse_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnIsPossibleToUse, &IsPossibleToUse_Parms, NULL );

	return IsPossibleToUse_Parms.ReturnValue;
}

// Function SFGameContent.SFCItem_Func_ProvideFastDISARMPDA.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_ProvideFastDISARMPDA::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 133113 ];

	USFCItem_Func_ProvideFastDISARMPDA_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_ProvideFastDISARMPDA.IsPossibleToUse
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

bool USFCItem_Func_ProvideFastDISARMPDA::IsPossibleToUse ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnIsPossibleToUse = NULL;

	if ( ! pFnIsPossibleToUse )
		pFnIsPossibleToUse = (UFunction*) UObject::GObjObjects()->Data[ 133114 ];

	USFCItem_Func_ProvideFastDISARMPDA_execIsPossibleToUse_Parms IsPossibleToUse_Parms;
	IsPossibleToUse_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnIsPossibleToUse, &IsPossibleToUse_Parms, NULL );

	return IsPossibleToUse_Parms.ReturnValue;
}

// Function SFGameContent.SFCItem_Common_Towel_Duck.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Towel_Duck::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133124 ];

	USFCItem_Common_Towel_Duck_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Flippers_Green.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Flippers_Green::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133132 ];

	USFCItem_Common_Flippers_Green_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_DuckMask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_DuckMask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133170 ];

	USFCItem_Common_DuckMask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_CrocodileMask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_CrocodileMask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133176 ];

	USFCItem_Common_CrocodileMask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Summercap.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Summercap::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133182 ];

	USFCItem_Common_Summercap_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Watergoggles.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Watergoggles::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133188 ];

	USFCItem_Common_Watergoggles_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Flippers_Yellow.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Flippers_Yellow::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133206 ];

	USFCItem_Common_Flippers_Yellow_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_SFWCCap.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCCap::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133212 ];

	USFCItem_Common_SFWCCap_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_SFWCBandana.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCBandana::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133218 ];

	USFCItem_Common_SFWCBandana_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_SFWCglove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCglove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133224 ];

	USFCItem_Common_SFWCglove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Shirts_SFWC.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Shirts_SFWC::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133231 ];

	USFCItem_GIGN_Shirts_SFWC_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_SFWC.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_SFWC::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133237 ];

	USFCItem_Common_Shirts_SFWC_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Tattoo_Shirts_03.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Shirts_03::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133263 ];

	USFCItem_GIGN_Tattoo_Shirts_03_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Tattoo_Shirts_03.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Shirts_03::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133273 ];

	USFCItem_Common_Tattoo_Shirts_03_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Tattoo_Shirts_02.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Shirts_02::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133280 ];

	USFCItem_GIGN_Tattoo_Shirts_02_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Tattoo_Shirts_02.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Shirts_02::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133285 ];

	USFCItem_Common_Tattoo_Shirts_02_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Tattoo_Shirts_01.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Shirts_01::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133290 ];

	USFCItem_GIGN_Tattoo_Shirts_01_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Tattoo_Shirts_01.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Shirts_01::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133297 ];

	USFCItem_Common_Tattoo_Shirts_01_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Tattoo_Arm_02.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Arm_02::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133308 ];

	USFCItem_GIGN_Tattoo_Arm_02_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Tattoo_Nude.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Nude::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133305 ];

	USFCItem_GIGN_Tattoo_Nude_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Tattoo_Arm_02.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Arm_02::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133319 ];

	USFCItem_Common_Tattoo_Arm_02_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Tattoo_Nude.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Nude::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133316 ];

	USFCItem_Common_Tattoo_Nude_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Tattoo_Arm_01.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Arm_01::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133325 ];

	USFCItem_GIGN_Tattoo_Arm_01_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Tattoo_Arm_01.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Arm_01::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133330 ];

	USFCItem_Common_Tattoo_Arm_01_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_CombatGlove_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_CombatGlove_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133335 ];

	USFCItem_Common_CombatGlove_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_CombatGlove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_CombatGlove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133342 ];

	USFCItem_Common_CombatGlove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_BattleGlove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_BattleGlove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133348 ];

	USFCItem_Common_BattleGlove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_SpeedUpBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SpeedUpBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133355 ];

	USFCItem_Common_SpeedUpBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_CombatBoots_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_CombatBoots_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133361 ];

	USFCItem_Common_CombatBoots_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_CombatBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_CombatBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133367 ];

	USFCItem_Common_CombatBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_BattleBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_BattleBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133373 ];

	USFCItem_Common_BattleBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_PumpkinHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_PumpkinHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133403 ];

	USFCItem_Common_PumpkinHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_Skeleton.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Skeleton::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 133409 ];

	USFCItem_Common_Shirts_Skeleton_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Cz700_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Cz700_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 133472 ];

	USFCItem_Cz700_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_FAMAS_Def_Sight.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_FAMAS_Def_Sight::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 133782 ];

	USFCItem_FAMAS_Def_Sight_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Scope_Bender.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Bender::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 134373 ];

	USFCItem_Common_Scope_Bender_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Scope_Zeiess.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Zeiess::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 134414 ];

	USFCItem_Common_Scope_Zeiess_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_CheyTac_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_CheyTac_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 134819 ];

	USFCItem_CheyTac_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_Pirate.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Pirate::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 134974 ];

	USFCItem_Common_Shirts_Pirate_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_Clan_Blue.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Clan_Blue::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 134984 ];

	USFCItem_Common_Shirts_Clan_Blue_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_Clan.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Clan::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 134981 ];

	USFCItem_Common_Shirts_Clan_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_Clan_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Clan_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 134991 ];

	USFCItem_Common_Shirts_Clan_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_Clan_Red.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Clan_Red::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 134995 ];

	USFCItem_Common_Shirts_Clan_Red_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_Running_Matrix.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Running_Matrix::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135001 ];

	USFCItem_Common_Shirts_Running_Matrix_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_Running_Leopard.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Running_Leopard::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135010 ];

	USFCItem_Common_Shirts_Running_Leopard_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_Running_NBD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Running_NBD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135016 ];

	USFCItem_Common_Shirts_Running_NBD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Shirts_Python.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Python::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135022 ];

	USFCItem_Common_Shirts_Python_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135157 ];

	USFCItem_UDT_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135167 ];

	USFCItem_GIGN_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135177 ];

	USFCItem_GAFE_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135187 ];

	USFCItem_SAS_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135197 ];

	USFCItem_Spetsnaz_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Delta_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Delta_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135207 ];

	USFCItem_Delta_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_MurderKnife.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_MurderKnife::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 135440 ];

	USFCItem_MurderKnife_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135625 ];

	USFCItem_UDT_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135631 ];

	USFCItem_GIGN_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135637 ];

	USFCItem_SAS_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135643 ];

	USFCItem_GAFE_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135649 ];

	USFCItem_Spetsnaz_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Delta_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Delta_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 135655 ];

	USFCItem_Delta_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Barret_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Barret_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 135704 ];

	USFCItem_Barret_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Scope_S2S.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_S2S::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 135731 ];

	USFCItem_Common_Scope_S2S_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_AWP_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_AWP_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 136125 ];

	USFCItem_AWP_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Scope_Dragunov.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Dragunov::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 136282 ];

	USFCItem_Common_Scope_Dragunov_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_SR25_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_SR25_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 136328 ];

	USFCItem_SR25_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_Scope_S2S_Once.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Scope_S2S_Once::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 136664 ];

	USFCItem_Scope_S2S_Once_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Scope_PM2.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_PM2::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 137341 ];

	USFCItem_Common_Scope_PM2_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_PSG1_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_PSG1_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 137356 ];

	USFCItem_PSG1_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_M870_KnockBack.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_M870_KnockBack::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 137717 ];

	USFCItem_M870_KnockBack_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_M870_KnockBack.ApplyItemToHostWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_M870_KnockBack::ApplyItemToHostWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToHostWeap = NULL;

	if ( ! pFnApplyItemToHostWeap )
		pFnApplyItemToHostWeap = (UFunction*) UObject::GObjObjects()->Data[ 137718 ];

	USFCItem_M870_KnockBack_execApplyItemToHostWeap_Parms ApplyItemToHostWeap_Parms;
	ApplyItemToHostWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToHostWeap, &ApplyItemToHostWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_M870_KnockBack.SetKnockBackParams
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_M870_KnockBack::SetKnockBackParams ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnSetKnockBackParams = NULL;

	if ( ! pFnSetKnockBackParams )
		pFnSetKnockBackParams = (UFunction*) UObject::GObjObjects()->Data[ 137720 ];

	USFCItem_M870_KnockBack_execSetKnockBackParams_Parms SetKnockBackParams_Parms;
	SetKnockBackParams_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnSetKnockBackParams, &SetKnockBackParams_Parms, NULL );
}

// Function SFGameContent.SFCItem_BowieKnife.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_BowieKnife::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 138596 ];

	USFCItem_BowieKnife_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_ProvideWallet.ApplyItemToHostActorEx
// [0x00022002] 
// Parameters infos:
// class ASFShooterDefencePlayerReplicationInfo* ShooterPRI                     ( CPF_Parm )
// int                            ValIdx                         ( CPF_Parm )

void USFCItem_Func_ProvideWallet::ApplyItemToHostActorEx ( class ASFShooterDefencePlayerReplicationInfo* ShooterPRI, int ValIdx )
{
	static UFunction* pFnApplyItemToHostActorEx = NULL;

	if ( ! pFnApplyItemToHostActorEx )
		pFnApplyItemToHostActorEx = (UFunction*) UObject::GObjObjects()->Data[ 138632 ];

	USFCItem_Func_ProvideWallet_execApplyItemToHostActorEx_Parms ApplyItemToHostActorEx_Parms;
	ApplyItemToHostActorEx_Parms.ShooterPRI = ShooterPRI;
	ApplyItemToHostActorEx_Parms.ValIdx = ValIdx;

	this->ProcessEvent ( pFnApplyItemToHostActorEx, &ApplyItemToHostActorEx_Parms, NULL );
}

// Function SFGameContent.SFCItem_P226_Def_Body.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_P226_Def_Body::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 139157 ];

	USFCItem_P226_Def_Body_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_P226_Def_Magazine.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_P226_Def_Magazine::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 139168 ];

	USFCItem_P226_Def_Magazine_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_P226_Def_Sight.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_P226_Def_Sight::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 139175 ];

	USFCItem_P226_Def_Sight_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
}

// Function SFGameContent.SFCItem_Dagger.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Dagger::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 139799 ];

	USFCItem_Dagger_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_ProvideStat.ApplyItemToHostActorEx
// [0x00022002] 
// Parameters infos:
// class ASFShooterDefencePlayerReplicationInfo* ShooterPRI                     ( CPF_Parm )
// int                            ValIdx                         ( CPF_Parm )

void USFCItem_Func_ProvideStat::ApplyItemToHostActorEx ( class ASFShooterDefencePlayerReplicationInfo* ShooterPRI, int ValIdx )
{
	static UFunction* pFnApplyItemToHostActorEx = NULL;

	if ( ! pFnApplyItemToHostActorEx )
		pFnApplyItemToHostActorEx = (UFunction*) UObject::GObjObjects()->Data[ 140076 ];

	USFCItem_Func_ProvideStat_execApplyItemToHostActorEx_Parms ApplyItemToHostActorEx_Parms;
	ApplyItemToHostActorEx_Parms.ShooterPRI = ShooterPRI;
	ApplyItemToHostActorEx_Parms.ValIdx = ValIdx;

	this->ProcessEvent ( pFnApplyItemToHostActorEx, &ApplyItemToHostActorEx_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_AddPrimaryMagazine.ApplyMagazine
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               SFW                            ( CPF_Parm )

void USFCItem_Func_AddPrimaryMagazine::ApplyMagazine ( class ASFWeapon* SFW )
{
	static UFunction* pFnApplyMagazine = NULL;

	if ( ! pFnApplyMagazine )
		pFnApplyMagazine = (UFunction*) UObject::GObjObjects()->Data[ 140105 ];

	USFCItem_Func_AddPrimaryMagazine_execApplyMagazine_Parms ApplyMagazine_Parms;
	ApplyMagazine_Parms.SFW = SFW;

	this->ProcessEvent ( pFnApplyMagazine, &ApplyMagazine_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_AddPrimaryMagazine.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_AddPrimaryMagazine::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 140106 ];

	USFCItem_Func_AddPrimaryMagazine_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_PvE_Haste.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_PvE_Haste::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 140138 ];

	USFCItem_Func_PvE_Haste_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
}

// Function SFGameContent.SFCItem_Beacon_RequestUAV.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Beacon_RequestUAV::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 140160 ];

	USFCItem_Beacon_RequestUAV_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_InstantShockWave.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_InstantShockWave::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 140170 ];

	USFCItem_Func_InstantShockWave_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_RecoveryHP.CanPurchaseInGameStore
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFPawn*                 ApplidedPawn                   ( CPF_Parm )

bool USFCItem_Func_RecoveryHP::CanPurchaseInGameStore ( class ASFPawn* ApplidedPawn )
{
	static UFunction* pFnCanPurchaseInGameStore = NULL;

	if ( ! pFnCanPurchaseInGameStore )
		pFnCanPurchaseInGameStore = (UFunction*) UObject::GObjObjects()->Data[ 140184 ];

	USFCItem_Func_RecoveryHP_execCanPurchaseInGameStore_Parms CanPurchaseInGameStore_Parms;
	CanPurchaseInGameStore_Parms.ApplidedPawn = ApplidedPawn;

	this->ProcessEvent ( pFnCanPurchaseInGameStore, &CanPurchaseInGameStore_Parms, NULL );

	return CanPurchaseInGameStore_Parms.ReturnValue;
}

// Function SFGameContent.SFCItem_Func_RecoveryHP.ApplyItemToActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_RecoveryHP::ApplyItemToActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToActor = NULL;

	if ( ! pFnApplyItemToActor )
		pFnApplyItemToActor = (UFunction*) UObject::GObjObjects()->Data[ 140185 ];

	USFCItem_Func_RecoveryHP_execApplyItemToActor_Parms ApplyItemToActor_Parms;
	ApplyItemToActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToActor, &ApplyItemToActor_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_MiniMapPing.ApplyItemToActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_MiniMapPing::ApplyItemToActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToActor = NULL;

	if ( ! pFnApplyItemToActor )
		pFnApplyItemToActor = (UFunction*) UObject::GObjObjects()->Data[ 140217 ];

	USFCItem_Func_MiniMapPing_execApplyItemToActor_Parms ApplyItemToActor_Parms;
	ApplyItemToActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToActor, &ApplyItemToActor_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_ProvideHumanHealth.IsPossibleToUse
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

bool USFCItem_Func_ProvideHumanHealth::IsPossibleToUse ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnIsPossibleToUse = NULL;

	if ( ! pFnIsPossibleToUse )
		pFnIsPossibleToUse = (UFunction*) UObject::GObjObjects()->Data[ 140238 ];

	USFCItem_Func_ProvideHumanHealth_execIsPossibleToUse_Parms IsPossibleToUse_Parms;
	IsPossibleToUse_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnIsPossibleToUse, &IsPossibleToUse_Parms, NULL );

	return IsPossibleToUse_Parms.ReturnValue;
}

// Function SFGameContent.SFCItem_Func_FreeInstantRespawn.ApplyItemToActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_FreeInstantRespawn::ApplyItemToActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToActor = NULL;

	if ( ! pFnApplyItemToActor )
		pFnApplyItemToActor = (UFunction*) UObject::GObjObjects()->Data[ 140257 ];

	USFCItem_Func_FreeInstantRespawn_execApplyItemToActor_Parms ApplyItemToActor_Parms;
	ApplyItemToActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToActor, &ApplyItemToActor_Parms, NULL );
}

// Function SFGameContent.SFCItem_Func_PrimaryMagazineUp.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_PrimaryMagazineUp::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 140262 ];

	USFCItem_Func_PrimaryMagazineUp_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140312 ];

	USFCItem_SAS_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140321 ];

	USFCItem_SAS_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140326 ];

	USFCItem_SAS_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140342 ];

	USFCItem_SAS_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_GasMask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_GasMask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140349 ];

	USFCItem_Common_GasMask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140365 ];

	USFCItem_SAS_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140382 ];

	USFCItem_GAFE_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140391 ];

	USFCItem_GAFE_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140396 ];

	USFCItem_GAFE_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140412 ];

	USFCItem_GAFE_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140423 ];

	USFCItem_GAFE_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_ChristmasGlove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChristmasGlove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140431 ];

	USFCItem_Common_ChristmasGlove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_SpeicalSuit.ApplyItemToHostPawn
// [0x00022000] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_SpeicalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140596 ];

	USFCItem_GIGN_SpeicalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_ScoutSuit.ApplyItemToHostPawn
// [0x00022000] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_ScoutSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140682 ];

	USFCItem_DeltaForce_ScoutSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140714 ];

	USFCItem_UDT_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140723 ];

	USFCItem_GAFE_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140732 ];

	USFCItem_GIGN_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140741 ];

	USFCItem_SAS_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCitem_Spetsnaz_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Spetsnaz_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140750 ];

	USFCitem_Spetsnaz_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCitem_Deltaforce_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Deltaforce_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140759 ];

	USFCitem_Deltaforce_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140768 ];

	USFCItem_UDT_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140782 ];

	USFCItem_GAFE_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140795 ];

	USFCItem_GIGN_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140809 ];

	USFCItem_SAS_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCitem_Spetsnaz_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Spetsnaz_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140822 ];

	USFCitem_Spetsnaz_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCitem_Deltaforce_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Deltaforce_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140836 ];

	USFCitem_Deltaforce_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140850 ];

	USFCItem_UDT_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140858 ];

	USFCItem_GAFE_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140865 ];

	USFCItem_GIGN_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140873 ];

	USFCItem_SAS_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCitem_Spetsnaz_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Spetsnaz_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140880 ];

	USFCitem_Spetsnaz_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCitem_Deltaforce_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Deltaforce_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140888 ];

	USFCitem_Deltaforce_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_ChristmasBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChristmasBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140928 ];

	USFCItem_Common_ChristmasBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140934 ];

	USFCItem_UDT_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140941 ];

	USFCItem_UDT_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140946 ];

	USFCItem_GIGN_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140953 ];

	USFCItem_GIGN_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140958 ];

	USFCItem_Spetsnaz_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140965 ];

	USFCItem_Spetsnaz_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Deltaforce_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Deltaforce_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140970 ];

	USFCItem_Deltaforce_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Deltaforce_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Deltaforce_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140977 ];

	USFCItem_Deltaforce_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140987 ];

	USFCItem_UDT_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 140997 ];

	USFCItem_UDT_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141002 ];

	USFCItem_GIGN_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141013 ];

	USFCItem_GIGN_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141018 ];

	USFCItem_Spetsnaz_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141028 ];

	USFCItem_Spetsnaz_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Deltaforce_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Deltaforce_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141033 ];

	USFCItem_Deltaforce_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Deltaforce_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Deltaforce_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141043 ];

	USFCItem_Deltaforce_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Sunglass_C.ApplyItemToPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Sunglass_C::ApplyItemToPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToPawn = NULL;

	if ( ! pFnApplyItemToPawn )
		pFnApplyItemToPawn = (UFunction*) UObject::GObjObjects()->Data[ 141052 ];

	USFCItem_Common_Sunglass_C_execApplyItemToPawn_Parms ApplyItemToPawn_Parms;
	ApplyItemToPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToPawn, &ApplyItemToPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_ChristmasBeard.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChristmasBeard::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141058 ];

	USFCItem_Common_ChristmasBeard_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141068 ];

	USFCItem_SAS_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141078 ];

	USFCItem_GAFE_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141088 ];

	USFCItem_GIGN_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141098 ];

	USFCItem_Spetsnaz_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141108 ];

	USFCItem_DeltaForce_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141118 ];

	USFCItem_SAS_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141128 ];

	USFCItem_GAFE_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141138 ];

	USFCItem_GIGN_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141148 ];

	USFCItem_Spetsnaz_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141158 ];

	USFCItem_DeltaForce_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Common_Christmas_Cap.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Christmas_Cap::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141168 ];

	USFCItem_Common_Christmas_Cap_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_BooniHat_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_BooniHat_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141174 ];

	USFCItem_UDT_BooniHat_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141180 ];

	USFCItem_UDT_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141190 ];

	USFCItem_UDT_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141200 ];

	USFCItem_UDT_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141207 ];

	USFCItem_UDT_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141213 ];

	USFCItem_UDT_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141219 ];

	USFCItem_UDT_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141225 ];

	USFCItem_UDT_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141232 ];

	USFCItem_UDT_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141238 ];

	USFCItem_UDT_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141245 ];

	USFCItem_UDT_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141251 ];

	USFCItem_UDT_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_Beret_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Beret_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141256 ];

	USFCItem_GAFE_Beret_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141262 ];

	USFCItem_GAFE_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141269 ];

	USFCItem_GAFE_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141275 ];

	USFCItem_GAFE_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141281 ];

	USFCItem_GAFE_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141287 ];

	USFCItem_GAFE_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141294 ];

	USFCItem_GAFE_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141300 ];

	USFCItem_GAFE_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141307 ];

	USFCItem_GAFE_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Bandana_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Bandana_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141313 ];

	USFCItem_GIGN_Bandana_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141319 ];

	USFCItem_GIGN_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141326 ];

	USFCItem_GIGN_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141332 ];

	USFCItem_GIGN_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141338 ];

	USFCItem_GIGN_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141344 ];

	USFCItem_GIGN_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141351 ];

	USFCItem_GIGN_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141357 ];

	USFCItem_GIGN_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141364 ];

	USFCItem_GIGN_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141370 ];

	USFCItem_GIGN_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_BooniHat_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_BooniHat_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141375 ];

	USFCItem_SAS_BooniHat_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141381 ];

	USFCItem_SAS_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141388 ];

	USFCItem_SAS_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141394 ];

	USFCItem_SAS_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141400 ];

	USFCItem_SAS_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141406 ];

	USFCItem_SAS_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141413 ];

	USFCItem_SAS_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141419 ];

	USFCItem_SAS_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141426 ];

	USFCItem_SAS_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141432 ];

	USFCItem_Spetsnaz_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141439 ];

	USFCItem_Spetsnaz_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141445 ];

	USFCItem_Spetsnaz_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141451 ];

	USFCItem_Spetsnaz_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141457 ];

	USFCItem_Spetsnaz_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141464 ];

	USFCItem_Spetsnaz_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141470 ];

	USFCItem_Spetsnaz_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141477 ];

	USFCItem_Spetsnaz_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141483 ];

	USFCItem_Spetsnaz_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_Beret_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Beret_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141488 ];

	USFCItem_Spetsnaz_Beret_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141514 ];

	USFCItem_DeltaForce_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141522 ];

	USFCItem_DeltaForce_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141528 ];

	USFCItem_DeltaForce_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141534 ];

	USFCItem_DeltaForce_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141540 ];

	USFCItem_DeltaForce_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141547 ];

	USFCItem_DeltaForce_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141553 ];

	USFCItem_DeltaForce_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141560 ];

	USFCItem_DeltaForce_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Deltaforce_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Deltaforce_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141566 ];

	USFCItem_Deltaforce_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_Cap_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Cap_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141571 ];

	USFCItem_DeltaForce_Cap_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_UDT_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141577 ];

	USFCItem_UDT_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GAFE_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141582 ];

	USFCItem_GAFE_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GIGN_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141587 ];

	USFCItem_GIGN_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_SAS_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141592 ];

	USFCItem_SAS_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_Spetsnaz_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141597 ];

	USFCItem_Spetsnaz_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_DeltaForce_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 141602 ];

	USFCItem_DeltaForce_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
}

// Function SFGameContent.SFCItem_GPM30A1.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_GPM30A1::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 141690 ];

	USFCItem_GPM30A1_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
}


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif