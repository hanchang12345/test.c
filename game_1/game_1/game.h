#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//�ַ��Ķ���
#define ROW 3
#define COL 3


//����������
//��ʼ������
void Initboard(char board[ROW][COL],int row,int col);
//��ӡ����
void Displaybpard(char board[ROW][COL], int row, int col);


//�������
void Playermove(char board[ROW][COL], int row, int col);
//��������
void Computermove(char board[ROW][COL], int row, int col);
//1.���Ӯ---*
//2.����Ӯ---#
//3.ƽ��---Q
//4.��Ϸ����---C


char Iswin(char board[ROW][COL], int row, int col);
