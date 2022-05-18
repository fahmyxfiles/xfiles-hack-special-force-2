
void MakeCALL(PDWORD target, PDWORD newfunc, int dwLen)
{
	DWORD Callto=(DWORD)(newfunc)-(DWORD)target-5;
    *(PBYTE)((DWORD)(target))=0xE8;
    *(PDWORD)((DWORD)(target)+1)=Callto;
	for(int i = 5; i<dwLen; i++)*(PBYTE)((DWORD)(target)+i)=0x90;
}
DWORD MakeJMP(PDWORD target, PDWORD newfunc, int dwLen)
{
	DWORD jmpto=(DWORD)(newfunc)-(DWORD)target-5;
    *(PBYTE)((DWORD)(target))=0xE9;
    *(PDWORD)((DWORD)(target)+1)=jmpto;
	for(int i = 5; i<dwLen; i++)*(PBYTE)((DWORD)(target)+i)=0x90;
	return 1;
}
DWORD MakePTR(BYTE *MemoryTarget, DWORD FunctionTarget)
{
	//XFiles make PTR
	//2014 FahmyXFiles
	DWORD dwOldProtect,dwBkup;
	DWORD dwRetn = *(DWORD*)(MemoryTarget);

	VirtualProtect(MemoryTarget, 4, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	*((DWORD *)(MemoryTarget)) = FunctionTarget;
	VirtualProtect(MemoryTarget, 4, dwOldProtect, &dwBkup);
	return dwRetn;
}
void _patchMEM(unsigned long dwBaseAddr, unsigned char* dwPatchVal, int size)
{
	DWORD Protect;
	VirtualProtect((void*)dwBaseAddr, size, PAGE_EXECUTE_READWRITE, &Protect);
	memcpy((void*)dwBaseAddr, dwPatchVal, size);
	VirtualProtect((void*)dwBaseAddr, size, Protect, &Protect);
}

HWND g_HWND=NULL;
BOOL CALLBACK EnumWindowsProcMy(HWND hwnd,LPARAM lParam)
{
    DWORD lpdwProcessId;
    GetWindowThreadProcessId(hwnd,&lpdwProcessId);
    if(lpdwProcessId==lParam)
    {
        g_HWND=hwnd;
        return FALSE;
    }
    return TRUE;
}
