#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3



void menu();
void Initboard(char board[ROW][COL], int row,int col);
void Display(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL],int row ,int col);
char IsWin(char board[ROW][COL], int row, int col);