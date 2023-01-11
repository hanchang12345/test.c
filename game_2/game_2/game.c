#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}


}


void Displayboard(char board[ROW][COL], int row, int col)
{

	int i = 0;
	int j = 0;
	printf("------------ɨ����Ϸ----------------\n");
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);

	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);

		}
		printf("\n");
	}
	printf("------------ɨ����Ϸ----------------\n");
}


void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0') 
		{
			mine[x][y] = '1';
			count--;
		}
	}


}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';


}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.��������
	//2.�ж�����Ϸ�
	//3.�ж��Ƿ�����
	    //1.��---��ը��--������Ϸ
	    //2.����--��¼��ͳ����Χ�м����׵�show--����
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{		
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int count=get_mine_count(mine, x, y);
				show[x][y] = count + '0'; 
				Displayboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("���������Ƿ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		Displayboard(mine, ROW, COL);
	}
}