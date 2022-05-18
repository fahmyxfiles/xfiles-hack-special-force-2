void WeaponAccurancy()
{
	if (pPC && pPC->Pawn && pPC->Pawn->IsA(ASFPawn_Player::StaticClass()))
	{
		ASFPawn_Player* MyPl = (ASFPawn_Player*)pPC->Pawn;

		if (MyPl)
		{
			pPC->bAppliedWeaponRecoilToCamera = false;
			MyPl->RecoilResult.crossDecreasValue = 0.0;
			MyPl->RecoilResult.crossIncline = 0.0;
			MyPl->RecoilResult.currentCrossVert = 0.0;
			MyPl->RecoilResult.currentDomValue = 0.0;
			MyPl->RecoilResult.decline = 0.0;
			MyPl->RecoilResult.expectCrossVert = 0.0;
			MyPl->RecoilResult.forceDir = 0;
			MyPl->RecoilResult.impactDecline = 0.0;
			MyPl->RecoilResult.impactIncreaseEye = 0.0;
			MyPl->RecoilResult.impactSpinY = 0.0;
			MyPl->RecoilResult.impactSpinZ = 0.0;
			MyPl->RecoilResult.movingValue = 0.0;
			MyPl->RecoilResult.movingValueForCrossHair = 0.0;
			MyPl->RecoilResult.oldrCrossVert = 0.0;
			MyPl->RecoilResult.recoilState = 0;
			MyPl->RecoilResult.spiny = 0.0;
			MyPl->RecoilResult.spinz = 0.0; 
		}
			
	}
}
void NoFlashBang()
{
	pLP->FlashBangEffect.SoundFadeOutDuration = 0.0;
	pLP->FlashBangEffect.SoundDuration = 0.0;
	pLP->FlashBangEffect.WhiteOutEndTimeRate = 0.0;
	pLP->FlashBangEffect.WhiteOutStartTimeRate = 0.0;
	pLP->FlashBangEffect.BlendOutEndTimeRate = 0.0;
	pLP->FlashBangEffect.BlendOutStartTimeRate = 0.0;
	pLP->FlashBangEffect.RemainTime = 0.0;
	pLP->FlashBangEffect.Lifetime = 0.0;
	pLP->FlashBangEffect.WhiteOutPower = 0.0;
	pLP->FlashBangEffect.AlphaPower = 0.0;
}

void UnlimitedAmmo()
{
	pPC->ServerToggleInfiniteAmmo();
	pPC->ServerToggleInfiniteMagazine();
	if(pLP->GetSFWeapon())pLP->GetSFWeapon()->ShotCost.Data[pLP->GetSFWeapon()->CurrentFireMode] = 0;
}


void InstantHit()
{
	if (pLP->GetSFWeapon()){ 
		pLP->GetSFWeapon()->CustomFire();
		pLP->GetSFWeapon()->FireAmmunition();
	}
}