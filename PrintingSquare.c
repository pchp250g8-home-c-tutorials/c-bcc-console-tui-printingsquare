#include <stdio.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <threads.h>
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    char szLine[] = "Hello World!!! Printing Square!!! Press Any Key To Exit!!!";
    int nLen = strlen(szLine);
    timespec sDuration;
    sDuration.nsec = 500000000;
    clrscr();
    _setcursortype(0);
    for (int i = 0; i < nLen; i++)
    {
        gotoxy(10 + i, 10);
        cprintf("%c%c", szLine[i], 0xDB);
        thrd_sleep(&sDuration, NULL);
    }
    gotoxy(10,10);
    cprintf("%s ", szLine);
    getch();
    return 0;
}
