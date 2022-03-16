#pragma once

void CreateBoard(char mass[9][9]);
void PrintBoard(char mass[9][9]);
void BlackPawnMove(int* step_integer, char mass[9][9]);
void WhitePawnMove(int* step_integer, char mass[9][9]);
void WhiteTurn(char mass[9][9]);
void BlackTurn(char mass[9][9]);
