#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
////����һ�����£����������
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = 0;
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		day = days[m];
//		if (m == 2)
//		{
//			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//			{
//				day += 1;
//			}
//		}
//		
//		printf("������=%d\n", day);
//	}
//	
//	return 0;
//}

////����7����0-100��ȥ�������С����ƽ����,���ʱ������λС��
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &n);
//		sum += n;
//		if (n > max)
//			max = n;
//		if (n < min)
//			min = n;
//	}
//	double ret = (sum - max - min) / 5.0;
//	printf("ƽ��ֵ��=%.2f\n", ret);
//
//	return 0;
//}

//���X
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//�ռ�����ԣ���������һ��ռ�ʱ����һ�ο��ٵĿռ�ܴ���ʻῪ�ٵ����ڵĿռ�

// �ڶ�������������ռ�
// Ч�ʽϵ�
// �ڴ���Ƭ��
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(10 * sizeof(int));
//	if (ps == NULL)
//		return 1;
//	ps->arr = malloc(10 * sizeof(int));
//	if (ps->arr == NULL)
//		return;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	int* ptr = (int*)realloc(ps->arr, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	free(ps->arr);//ֻ�����ͷ�arr���ͷ�ps
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//��������ǰ������һ������
//�������鿪���ڶ���---ֻ������һ��ռ�
//�ڴ���Ƭ��С--Ч�ʸ�
// �����ͷ�
//���������ʹ��
//struct S
//{
//	int n;
//	int arr[];
//	����int arr[0]
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	if (ps == NULL)
//	{
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = (struct S*) realloc(ps, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}
// #define�൱��ȡ��
// ���� int* p��k ������������ָ��
// ����p��ָ�룬k��int����
// typedef������������--����������ȡ�˸�����
// �ĵ����ֺ�double int�ȵ�Ȩ��һ��������������
// 
//#define E int*
//int main()
//{
//
//	typedef int* D;
//	E a, b;//a��ָ�룬b����
//	D c, d;//c��d��ָ��
//	//a=8,b=4,c=8,d=8
//	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
//	return 0;
//}
// 
// 
//�ֲ���������ջ������������ʱ������
// ������getmomery���������鴴���󣬴�����Ԫ�صĵ�ַ
// ���غ��������٣����Ǵ����˵�ַֻ�ǵ�ַָ�������������
// ����û������
// ����static��������������ڱ䳤�ˣ������гɹ�
// static���εı������ھ�̬�������ݶΣ�
//char* getmomery(void)
//{
//	static char p[] = "hello world";
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	str = getmomery();
//	printf(str);
//}
//int main()
//{
//
//	test();
//	return 0;
//}
// 
// 
//�İ�2---������ַ
//char* getmemory(char* p)
//{
//	p = malloc(100);
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	str = getmemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}


//�İ�1--����ַ
//void getmemory(char** p)
//{
//	*p = malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	getmemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}


//��������
//1.������str������p��str����ʱ����������ı�str������������p���٣��ڴ�й©
//2.������getmemory������str����NULL������strcpy�������гɹ�
//3.û��free�����ٵĿռ�

//void getmemory(char* p)
//{
//	p = malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	getmemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	//printf("hello world")
//	//�����������ַ�����Ԫ�صĵ�ַ��Ȼ���õ�ַ����
//}
//int main()
//{
//	test();
//	return 0;
//}

//��̬�ڴ濪�ٵĳ�������
//1.��ָ��---malloc���ص��ǵ�ַ--Ҫ�жϷ����ǲ��ǿ�ָ��
//2.ָ��Խ�����
//3.free���Ĳ��Ƕ�̬�ڴ棨����ջ������̬���ı����������ᱨ��
//4.free�����ǿ��ٿռ��һ����
//5.free���ͬһ���ڴ�ռ�---free����NULL
//6.��̬�ڴ濪��ʹ��֮��û���ͷ�---�ڴ�й©
//��̬�ڴ濪�ٵĿռ�ֻ�����ַ���1.�����ͷ� 2.�������---���Ǻ�������


//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//*p++= i;//err--pָ���λ�øı���
//		*(p + i) = i;//pָ���λ�ò���
//	}
//	free(p);//free����ֻ�ǿ��ٵ�һ���֣�Ӧ��free��ȫ��
//	p = NULL;
//
//	return 0;
//}



//int main()
//{
//	int arr[] = { 0 };
//	int* p = arr;
//	if (p == NULL)
//	{
//		return;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}