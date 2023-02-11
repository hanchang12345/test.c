#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
//struct A
//{
//	int a;
//	float b;
//	char c;
//	double d;
//};
//
////模拟实现offsetof
//#define  OFFSETOF(struct_name,mem_name)  (int)&(((struct_name*)0)->mem_name)
//int main()
//{
//	printf("%d\n", OFFSETOF(struct A, a));
//	printf("%d\n", OFFSETOF(struct A, b));
//	printf("%d\n", OFFSETOF(struct A, c));
//	printf("%d\n", OFFSETOF(struct A, d));
//	//printf("%d\n", sizeof(struct A));
//
//	return 0;
//}
//enum S
//{
//	FEIFA,//0
//	HEFA//1
//};
//enum S a;
//int my_atoi(const char* s)
//{
//	assert(NULL != s);
//	int flag = 0;
//	while (isspace(*s))
//	{
//		s++;
//	}
//	if (*s == '+')
//	{
//		flag = 1; 
//		s++;
//	}
//	else if(*s=='-')
//	{
//		flag = -1;
//		s++;
//	}
//	if (*s == '\0')
//	{
//		return 0;
//	}
//	
//	long long n = 0;
//	while (isdigit(*s))
//	{
//		n = n * 10 + (*s - '0');
//		if (n > INT_MAX || n < INT_MIN)
//		{
//			return 0;
//		}
//		s++;
//	}
//	if (flag == -1)
//	{
//		n = n * flag;
//	}
//
//	if (*s == '\0')
//	{
//		a = HEFA;
//		return (int)n;
//	}
//	else
//	{
//		return (int)n;
//	}
//}
//int main()
//{
//	//1.空指针
//	//2.空格---isspace
//	//3.正负
//	//4.字母--返回字母前的数据
//	//5.空字符串
//	//6.放不下 
//	char* p = "  -112233";
//	int ret = my_atoi(p);
//	if( a == HEFA)
//		printf("合法使用：%d\n", ret);
//	else
//		printf("非法使用：%d\n", ret);
//	return 0;
//}

//调用本地的头文件是用""
//调用库函数是用<>
//""是先调用本地头文件，如果没有在调用库函数
//<>直接调用库函数

//int main()
//{
//
//	printf("%d", sizeof(long));
//	return 0;
//}