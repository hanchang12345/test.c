#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//字符的定义
#define ROW 3
#define COL 3


//函数的声明
//初始化棋盘
void Initboard(char board[ROW][COL],int row,int col);
//打印棋盘
void Displaybpard(char board[ROW][COL], int row, int col);


//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);
//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);
//1.玩家赢---*
//2.电脑赢---#
//3.平局---Q
//4.游戏继续---C


char Iswin(char board[ROW][COL], int row, int col);
