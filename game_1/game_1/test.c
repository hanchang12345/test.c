#define  _CRT_SECURE_NO_WARNINGS

#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("****       1,  play           ****\n");
	printf("****       0,  exit           ****\n");
	printf("**********************************\n");
}
void game()
{//�洢����--��ά����
	char board[ROW][COL];
   //��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Displaybpard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		Displaybpard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=Iswin(board ,ROW, COL);
		if (ret != 'C')
			break;
		//��������
		Computermove(board, ROW, COL);
		Displaybpard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret=Iswin(board ,ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*') 
	{
		printf("���Ӯ��\n");
		Displaybpard(board, ROW, COL);
	}
	else if (ret == '#') 
	{
		printf("����Ӯ��\n");
		Displaybpard(board, ROW, COL);
	}
	else
	{
		printf("ƽ��\n");
	}
	Displaybpard(board, ROW, COL);
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