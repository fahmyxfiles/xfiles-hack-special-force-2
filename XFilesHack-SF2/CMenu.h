#pragma warning(disable:4305)


#define		MENUFOLDER		1
#define		MENUTEXT		2
#define		MENUITEM		3
#define		MENUCAT			4
#define		MENUMAXITEMS	100

typedef struct {
	int  typ;
	wchar_t *txt;
	wchar_t **opt;
	int  *var;
	int  maxvalue;
} tMENU;

class D3D9Menu
{
	public:
		bool bInit;

		enum{
			L_TEXT,
			R_TEXT,
			C_TEXT
		};

		D3D9Menu(wchar_t *Title = 0) {
			Mtitle=Title;
			Mpos=0;
			Mmax=0;
			Mxofs =150.0f;
			Mysize=15.0f;
			Mvisible=1;
			MENU=(tMENU **) malloc(4*MENUMAXITEMS);
			for(int i=0; i<MENUMAXITEMS; i++) MENU[i]=(tMENU *) malloc(sizeof(tMENU));
		}
		~D3D9Menu() {
			for(int i=0; i<MENUMAXITEMS; i++) free(MENU[i]);
			free(MENU);
		}		
		int		Mmax;
		tMENU	**MENU;


		void	DrawString(UCanvas* pCanvas, int x, int y, FColor color, int mode, wchar_t *text);
		void	AddFolder(wchar_t *txt, wchar_t **opt, int *var, int maxvalue);
		void	AddCategory(wchar_t *txt, wchar_t **opt, int *var, int maxvalue);
		void	AddItem(wchar_t *txt, wchar_t **opt, int *var, int maxvalue);
		void	Crosshair(UCanvas* pCanvas, FColor Color);
		void	AddText(wchar_t *txt, wchar_t *opt);
		void	MenuShow(float x, float y, UCanvas* pCanvas);
		void	MenuNav(void);
		
	
	private:
		wchar_t	*Mtitle;
		int 	Mpos;
		float	Mxofs;
		float	Mysize;
		int		Mvisible;
		int		YPOS;
};

float fCurX,fCurY;
UFont* uCurFont;
void D3D9Menu::DrawString(UCanvas* pCanvas, int x, int y, FColor color, int mode, wchar_t *text)
{
	fCurX = pCanvas->CurX;
	fCurY = pCanvas->CurY;
	uCurFont = pCanvas->Font;

	pCanvas->Font = Eng->GetMediumFont();

	pCanvas->CurY = y;
	pCanvas->DrawColor = color;

	if (mode == R_TEXT)
	{
		pCanvas->CurX = x;
	}
	else if (mode == L_TEXT)
	{
		float X, Y;
		pCanvas->StrLen(text, &X, &Y);

		X *= 0.7;
		Y *= 0.7;

		pCanvas->CurX = x - X;
	}
	else if (mode == C_TEXT)
	{
		float X, Y;
		pCanvas->StrLen(text, &X, &Y);

		X *= 0.7;
		Y *= 0.7;

		pCanvas->CurX = x - (X/2);
	}

	pCanvas->DrawTextA(text, NULL, 0.7, 0.7, NULL);

	pCanvas->CurX = fCurX;
	pCanvas->CurY = fCurY;
	pCanvas->Font = uCurFont;
}

void D3D9Menu::AddFolder(wchar_t *txt, wchar_t **opt, int *var, int maxvalue)
{
	MENU[Mmax]->typ = MENUFOLDER;
	MENU[Mmax]->txt = txt;
	MENU[Mmax]->opt = opt;
	MENU[Mmax]->var = var;
	MENU[Mmax]->maxvalue = maxvalue;
	Mmax++;
}

void D3D9Menu::AddCategory(wchar_t *txt, wchar_t **opt, int *var, int maxvalue)
{
	MENU[Mmax]->typ = MENUCAT;
	MENU[Mmax]->txt = txt;
	MENU[Mmax]->opt = opt;
	MENU[Mmax]->var = var;
	MENU[Mmax]->maxvalue = maxvalue;
	Mmax++;
}

void D3D9Menu::AddItem(wchar_t *txt, wchar_t **opt, int *var, int maxvalue)
{
	MENU[Mmax]->typ = MENUITEM;
	MENU[Mmax]->txt = txt;
	MENU[Mmax]->opt = opt;
	MENU[Mmax]->var = var;
	MENU[Mmax]->maxvalue = maxvalue;
	Mmax++;
}

void D3D9Menu::AddText(wchar_t *txt, wchar_t *opt)
{
	MENU[Mmax]->typ = MENUTEXT;
	MENU[Mmax]->txt = txt;
	MENU[Mmax]->opt = (wchar_t **)opt;
	MENU[Mmax]->var = 0;
	MENU[Mmax]->maxvalue = 0;
	Mmax++;
}

void D3D9Menu::Crosshair(UCanvas* pCanvas, FColor Color)
{
	pCanvas->Draw2DLine(pCanvas->ClipX / 2 - 10, pCanvas->ClipY / 2, pCanvas->ClipX / 2 + 10, pCanvas->ClipY / 2, Color);
	pCanvas->Draw2DLine(pCanvas->ClipX / 2 , pCanvas->ClipY / 2 -10, pCanvas->ClipX / 2 , pCanvas->ClipY / 2 +10, Color);
}

void D3D9Menu::MenuShow(float x, float y, UCanvas* pCanvas)
{
	int i, val;
	FColor color;
	wchar_t text[100];
	if (!Mvisible) return;

	for (i = 0; i<Mmax; i++) {
		val = (MENU[i]->var) ? (*MENU[i]->var) : 0;
		swprintf_s(text, L"%s", MENU[i]->txt);
		if (i == Mpos) {
			color = RED2;
			swprintf_s(text, L"~> %s <~", MENU[i]->txt);
		}
		else if (MENU[i]->typ == MENUFOLDER)
			color = YELLOW;
		else if (MENU[i]->typ == MENUTEXT)
			color = GREEN;
		else
			color = (val) ? GREEN : WHITE;
		if (MENU[i]->opt) {
			if (MENU[i]->typ == MENUFOLDER) {
				DrawString(pCanvas, x + 130, y, color, L_TEXT, text);
				y = y + 2;
			}
			else
				DrawString(pCanvas, x + 130, y, color, L_TEXT, text);
		}
		if (MENU[i]->opt) {
			if (MENU[i]->typ == MENUTEXT)
				DrawString(pCanvas, (x + Mxofs), y - 1, color, R_TEXT, (wchar_t *)MENU[i]->opt);
			else
				DrawString(pCanvas, (x + Mxofs), y - 1, color, R_TEXT, (wchar_t *)MENU[i]->opt[val]);
		}
		y += Mysize;
	}
	YPOS = y;
}

void D3D9Menu::MenuNav(void)
{
	//if (GetKey(VK_F1) & 1) Mvisible = (!Mvisible);//64 Bit
	if (IsKeyboardKeyDownOnce(DIK_DELETE)) {
		Mvisible = !Mvisible;//32 Bit
	}
//=============================
	if (!Mvisible) return;

	//if (GetKey(VK_UP) & 1) {//64 bit
	if (IsKeyboardKeyDownOnce(DIK_UP)){//32bit
		do {
			Mpos--;
			if (Mpos<0) Mpos = Mmax - 1;
		} while (MENU[Mpos]->typ == MENUTEXT);
	}
	//else if (GetKey(VK_DOWN) & 1) {//64bit
	else if (IsKeyboardKeyDownOnce(DIK_DOWN)){//32bit
		do {
			Mpos++;
			if (Mpos == Mmax) Mpos = 0;
		} while (MENU[Mpos]->typ == MENUTEXT);
	}
	else if (MENU[Mpos]->var) {
		int dir = 0;
//=============================== 32 BIT============================================
		if (IsKeyboardKeyDownOnce(DIK_LEFT) && *MENU[Mpos]->var > 0) dir = -1;
		if (IsKeyboardKeyDownOnce(DIK_RIGHT) && *MENU[Mpos]->var <(MENU[Mpos]->maxvalue - 1)) dir = 1;
//===============================64 BIT============================================
		//if (GetKey(VK_LEFT) & 1 && *MENU[Mpos]->var > 0) dir = -1;
		//if (GetKey(VK_RIGHT) & 1 && *MENU[Mpos]->var <(MENU[Mpos]->maxvalue - 1)) dir = 1;
//==================================================================================
		if (dir) {
			*MENU[Mpos]->var += dir;
			if (MENU[Mpos]->typ == MENUFOLDER) 	Mmax = 0;
			if (MENU[Mpos]->typ == MENUCAT) Mmax = 0;
		}
	}
}