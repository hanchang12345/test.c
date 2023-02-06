#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
//动态版本---堆区
// 初始时只有三个
// 满了时加两个
//

//通讯录
//存1000个人的信息
//姓名+年龄+性别+电话+地址
// 1.增加
// 2.删除
// 3.查找
// 4.修改
// 5.排序
// 6.退出
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
	//创建通讯录
	Contact con;
	Initcontact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加
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
			SortContact(&con);//按名字大小由小到大
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			DestoryContact(&con);
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}


	} while (input);
	return 0;
}

////静态版本
////通讯录
////存1000个人的信息
////姓名+年龄+性别+电话+地址
//// 1.增加
//// 2.删除
//// 3.查找
//// 4.修改
//// 5.排序
//// 6.退出
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
//	//创建通讯录
//	Contact con;
//	Initcontact(&con);
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			//增加
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
//			SortContact(&con);//按名字大小由小到大
//			break;
//		case PRINT:
//			PrintContact(&con);
//			break;
//		case EXIT:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//
//
//	} while (input);
//	return 0;
//}