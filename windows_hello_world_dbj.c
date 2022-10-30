/*
   2022-10-30 dbj@dbj.org 
*/
#define WIN32_LEAN_AND_MEAN
#define STRICT 1
#include <windows.h>

int APIENTRY wWinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hInstance);
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	UNREFERENCED_PARAMETER(nCmdShow);

	return (int)MessageBoxA(NULL, "Hello World!", "Win32", 0);
}

