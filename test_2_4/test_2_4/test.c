#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
//��̬�汾---����
// ��ʼʱֻ������
// ����ʱ������
//

//ͨѶ¼
//��1000���˵���Ϣ
//����+����+�Ա�+�绰+��ַ
// 1.����
// 2.ɾ��
// 3.����
// 4.�޸�
// 5.����
// 6.�˳�
//
#define MAX 1000
void menu()
{
	printf("********************************************\n");
	printf("****        1. add         2.del        ****\n");
	printf("****        3. search      4.modify     ****\n");
	printf("****        5. sort        6.print      ****\n");
	printf("****        0. exit                     ****\n");
	printf("********************************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;
	Initcontact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//����
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);//�����ִ�С��С����
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			DestoryContact(&con);
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}


	} while (input);
	return 0;
}

////��̬�汾
////ͨѶ¼
////��1000���˵���Ϣ
////����+����+�Ա�+�绰+��ַ
//// 1.����
//// 2.ɾ��
//// 3.����
//// 4.�޸�
//// 5.����
//// 6.�˳�
////
//#define MAX 1000
//void menu()
//{
//	printf("********************************************\n");
//	printf("****        1. add         2.del        ****\n");
//	printf("****        3. search      4.modify     ****\n");
//	printf("****        5. sort        6.print      ****\n");
//	printf("****        0. exit                     ****\n");
//	printf("********************************************\n");
//}
//enum Option
//{
//	EXIT,
//	ADD,
//	DEL,
//	SEARCH,
//	MODIFY,
//	SORT,
//	PRINT
//};
//
//int main()
//{
//	int input = 0;
//	//����ͨѶ¼
//	Contact con;
//	Initcontact(&con);
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			//����
//			AddContact(&con);
//			break;
//		case DEL:
//			DelContact(&con);
//			break;
//		case SEARCH:
//			SearchContact(&con);
//			break;
//		case MODIFY:
//			ModifyContact(&con);
//			break;
//		case SORT:
//			SortContact(&con);//�����ִ�С��С����
//			break;
//		case PRINT:
//			PrintContact(&con);
//			break;
//		case EXIT:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//
//
//	} while (input);
//	return 0;
//}