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
	//���׵�----0
	char mine[ROWS][COLS] = { 0 };
	//����ʾ���ݵ�---*
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	
	Displayboard(show, ROW, COL);

	//������
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
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