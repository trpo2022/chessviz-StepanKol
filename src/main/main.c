#include "../libchessviz/chessviz.h"

#include <stdio.h>
int main()
{
    char mass[9][9];
    int MoveNumber = 1;
    int j = 1;
    CreateBoard(mass);
    PrintBoard(mass);
    while (flag == 1) {
        printf("%d. ", MoveNumber);
        WhiteTurn(mass);
        BlackTurn(mass);
        PrintBoard(mass);
        MoveNumber += 1;
    }
    return 0;
}
