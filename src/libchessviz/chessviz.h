#pragma once

void CreateBoard(char mass[9][9]);
void PrintBoard(char mass[9][9]);
void BlackPawnMove(int* step_integer, char mass[9][9]);
void WhitePawnMove(int* step_integer, char mass[9][9]);
void WhiteTurn(char mass[9][9]);
void BlackTurn(char mass[9][9]);
void WhiteKingMove(int *step_integer, char mass[9][9]);
void BlacKingMove(int *step_integer, char mass[9][9]);
void WhiteRookMove(int *step_integer, char mass[9][9]);
void BlackRookMove(int *step_integer, char mass[9][9]);
void WhiteBishopMove(int *step_integer, char mass[9][9]);
void BlackBishopMove(int *step_integer, char mass[9][9]);
void WhiteQueenMove(int *step_integer, char mass[9][9]);
void BlackQueenMove(int *step_integer, char mass[9][9]);
void WhiteHorseMove(int *step_integer, char mass[9][9]);
void BlackHorseMove(int *step_integer, char mass[9][9]);


