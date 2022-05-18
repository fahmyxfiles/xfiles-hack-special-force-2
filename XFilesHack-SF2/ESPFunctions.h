void ShowESPNames ( APawn* Player )
{


	if (Player == NULL || Player->PlayerReplicationInfo == NULL || pPC == NULL || pPC->Pawn == NULL)return;

	wchar_t wString[100];
	float tX, tY;

	FBox Box;
	Player->GetComponentsBoundingBox(&Box);

	FVector vpjMax;
	FVector vpjCenter; 
	if(WorldToScreen(Box.Max,vpjMax) && WorldToScreen(Player->Location,vpjCenter)){
		swprintf(wString, 99, L"%s", Player->PlayerReplicationInfo->PlayerName);
	
		npCanvas->StrLen(wString, &tX, &tY);

		DrawString(npCanvas, vpjCenter.X - (tX / 2), vpjMax.Y - 20,wString, 1.0f,1.0f,RED2);
	}

}
void ShowESPLine ( APawn* Target )
{


	FVector TargetLocation3D = GetBoneLocationByIndex(Target,14); // Head
	FVector TargetLocation2D;
	if( IsEnemy( pPC->Pawn, Target ) && Target && Target->PlayerReplicationInfo )
	{
		if(WorldToScreen(TargetLocation3D,TargetLocation2D)){
			npCanvas->Draw2DLine(ClipX / 2,ClipY / 2,TargetLocation2D.X,TargetLocation2D.Y,GREEN);
		}
	}

}

void DrawBone( APawn* Target, int BoneStart, int BoneEnd)
{
	FVector TargetLocation3DA = GetBoneLocationByIndex(Target,BoneStart); // Head
	FVector TargetLocation2DA;
	FVector TargetLocation3DB = GetBoneLocationByIndex(Target,BoneEnd); // Head
	FVector TargetLocation2DB;
	if(WorldToScreen(TargetLocation3DA,TargetLocation2DA) && WorldToScreen(TargetLocation3DB,TargetLocation2DB)){
		npCanvas->Draw2DLine(TargetLocation2DA.X,TargetLocation2DA.Y,TargetLocation2DB.X,TargetLocation2DB.Y,Green);
	}
}
void ShowESPBone ( APawn* Target )
{

	if( IsEnemy( pPC->Pawn, Target ) && Target && Target->PlayerReplicationInfo )
	{
		for(int i = 9; i < 14; i++) // Badan
		{
			DrawBone(Target,i,i+1);
		}
		
		DrawBone(Target,12,15);
		for(int i = 15; i < 18; i++) // Tangan kiri
		{
			DrawBone(Target,i,i+1);
		}
		DrawBone(Target,12,36);
		for(int i = 36; i < 39; i++) // Tangan kanan
		{
			DrawBone(Target,i,i+1);
		}
		DrawBone(Target,9,57);
		for(int i = 57; i < 60; i++) // Kaki kiri
		{
			DrawBone(Target,i,i+1);
		}
		DrawBone(Target,9,61);
		for(int i = 61; i < 64; i++) // Kaki kanan
		{
			DrawBone(Target,i,i+1);
		}
		


	}

}