#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
void game() 
{
	char board[ROW][COL];
	//初始化棋盘
	Initboard(board,ROW,COL);
	//打印棋盘
	Display(board, ROW, COL);
	char ret = 0;
	while (1)
	{	//玩家下棋
		PlayerMove(board, ROW, COL);
		Display(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		Display(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	Display(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}