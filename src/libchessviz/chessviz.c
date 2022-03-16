#include <libchessviz/chessviz.h>

#include <stdio.h>
#include <stdlib.h>

void CreateBoard(char mass[9][9])
{
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 1; j++) {
            mass[i][j] = 56 - i;
        }
    mass[8][0] = 32;
    for (int i = 8; i > 7; i--) {
        for (int j = 1; j < 9; j++)
            mass[i][j] = 96 + j;
    }
    for (int i = 2; i < 6; i++)
        for (int j = 1; j < 9; j++) {
            mass[i][j] = 32;
        }
    for (int i = 1; i < 2; i++)
        for (int j = 1; j < 9; j++) {
            mass[i][j] = 112;
        }
    for (int i = 6; i < 7; i++)
        for (int j = 1; j < 9; j++) {
            mass[i][j] = 80;
        }
    mass[7][1] = 82;
    mass[7][8] = 82;
    mass[7][2] = 78;
    mass[7][7] = 78;
    mass[7][3] = 66;
    mass[7][6] = 66;
    mass[7][4] = 81;
    mass[7][5] = 75;
    mass[0][1] = 114;
    mass[0][8] = 114;
    mass[0][2] = 110;
    mass[0][7] = 110;
    mass[0][3] = 98;
    mass[0][6] = 98;
    mass[0][4] = 113;
    mass[0][5] = 107;
}

void PrintBoard(char mass[9][9])
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            printf("%c ", mass[i][j]);
        printf("\n");
    }
    printf("\n");
}

void BlackPawnMove(int* step_integer, char mass[9][9])
{
    if ((step_integer[1] == 1) && (step_integer[4] == step_integer[1] + 2)
        && (mass[step_integer[4]][step_integer[3]] == ' ')) {
        mass[step_integer[4]][step_integer[3]]
                = mass[step_integer[1]][step_integer[0]];
        mass[step_integer[1]][step_integer[0]] = ' ';
    } else if (
            (mass[step_integer[4]][step_integer[3]] == ' ')
            && (step_integer[4] == step_integer[1] + 1)) {
        mass[step_integer[4]][step_integer[3]]
                = mass[step_integer[1]][step_integer[0]];
        mass[step_integer[1]][step_integer[0]] = ' ';
    } else if (
            (mass[step_integer[4]][step_integer[3]] > 'A')
            && (mass[step_integer[4]][step_integer[3]] < 'Z')
            && (step_integer[4] == step_integer[1] + 1)
            && ((step_integer[3] == step_integer[0] + 1)
                || (step_integer[3] == step_integer[0] - 1))) {
        mass[step_integer[4]][step_integer[3]]
                = mass[step_integer[1]][step_integer[0]];
        mass[step_integer[1]][step_integer[0]] = ' ';
    }
}
void WhitePawnMove(int* step_integer, char mass[9][9])
{
    if ((step_integer[1] == 6) && (step_integer[4] == step_integer[1] - 2)
        && (mass[step_integer[4]][step_integer[3]] == ' ')) {
        mass[step_integer[4]][step_integer[3]]
                = mass[step_integer[1]][step_integer[0]];
        mass[step_integer[1]][step_integer[0]] = ' ';
    } else if (
            (mass[step_integer[4]][step_integer[3]] == ' ')
            && (step_integer[4] == step_integer[1] - 1)) {
        mass[step_integer[4]][step_integer[3]]
                = mass[step_integer[1]][step_integer[0]];
        mass[step_integer[1]][step_integer[0]] = ' ';
    } else if (
            (mass[step_integer[4]][step_integer[3]] > 'a')
            && (step_integer[4] == step_integer[1] - 1)
            && ((step_integer[3] == step_integer[0] + 1)
                || (step_integer[3] == step_integer[0] - 1))) {
        mass[step_integer[4]][step_integer[3]]
                = mass[step_integer[1]][step_integer[0]];
        mass[step_integer[1]][step_integer[0]] = ' ';
    }
}
void WhiteTurn(char mass[9][9])
{
    char step[6];
    int flag = 1, step_integer[6];
    scanf("%s", step);
    while (flag == 1) {
        flag = 0;
        while ((step[0] < 'a') || (step[0] > 'h') || (step[2] != '-')) {
            printf("this move doesn't work, make another move\n");
            scanf("%s", step);
        }
        step[0] = step[0] - 96;
        step[1] = abs(step[1] - 56);
        step[3] = step[3] - 96;
        step[4] = abs(step[4] - 56);
        step_integer[0] = step[0];
        step_integer[1] = step[1];
        step_integer[3] = step[3];
        step_integer[4] = step[4];
        switch (mass[step_integer[1]][step_integer[0]]) {
        case 'P':
            WhitePawnMove(step_integer, mass);
            if (mass[step_integer[1]][step_integer[0]] == 'P') {
                flag = 1;
                printf("this move doesn't work, make another move");
            }
            break;
        default:
            printf("this move doesn't work, make another move");
            flag = 1;
        }
    }
}

void BlackTurn(char mass[9][9])
{
    char step[6];
    int flag = 1, step_integer[6];
    printf(" ");
    scanf("%s", step);
    while (flag == 1) {
        flag = 0;
        while ((step[0] < 'a') || (step[0] > 'h') || (step[2] != '-')) {
            printf("this move doesn't work, make another move\n");
            scanf("%s", step);
        }
        step[0] = step[0] - 96;
        step[1] = abs(step[1] - 56);
        step[3] = step[3] - 96;
        step[4] = abs(step[4] - 56);
        step_integer[0] = step[0];
        step_integer[1] = step[1];
        step_integer[3] = step[3];
        step_integer[4] = step[4];
        switch (mass[step_integer[1]][step_integer[0]]) {
        case 'p':
            BlackPawnMove(step_integer, mass);
            if (mass[step_integer[1]][step_integer[0]] == 'p') {
                flag = 1;
                printf("this move doesn't work, make another move");
            }
            break;
        default:
            printf("this move doesn't work, make another move\n");
            flag = 1;
        }
    }
}
