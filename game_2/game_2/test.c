#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("****     1.  play       ****\n");
	printf("****     0.  exit       ****\n");
	printf("****************************\n");
}
void game()
{
	//存雷的----0
	char mine[ROWS][COLS] = { 0 };
	//存显示数据的---*
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	
	Displayboard(show, ROW, COL);

	//布置雷
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>\n");
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