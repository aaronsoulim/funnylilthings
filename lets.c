#include <windows.h>

int main(void)
{
if(MessageBoxA(NULL, "I LOVE YOU", "HEY BABY!", MB_OKCANCEL | MB_ICONASTERISK)==IDCANCEL)
{MessageBoxA(NULL, "FUCK YOU, TOO :P", "HEY!", MB_OK | MB_ICONEXCLAMATION);
ExitWindowsEx(0,0);}
else
return EXIT_SUCCESS;
}