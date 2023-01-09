#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
void game() 
{
	char board[ROW][COL];
	//��ʼ������
	Initboard(board,ROW,COL);
	//��ӡ����
	Display(board, ROW, COL);
	char ret = 0;
	while (1)
	{	//�������
		PlayerMove(board, ROW, COL);
		Display(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		Display(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}