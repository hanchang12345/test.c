#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int(*parr[10])[5]
// parr������ ��10��Ԫ��
// ÿ��Ԫ�ص�����������ָ�� int(*)[5]
// ÿ������ָ��ָ���������5��Ԫ��
 
 
//�������ʽ
//}void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//ָ�����ʽ
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//		    //	            *(p + i) = ��ά�������һά����
//			//printf("%d ", (*(p + i) )[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr,3,5);
//	print2(arr, 3, 5);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	int* p1 = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p1+i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//	}*/
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);//*p=arr
//	}*/
//
//
//	return 0;
//}

//int main()
//{
//	//[]�����ȼ�����*
//	int* p1 = NULL;
//	//����ָ��--������εĵ�ַ
//	char* p = NULL;
//	//�ַ�ָ��---����ַ��ĵ�ַ
//	//int arr[10];
//	//����ָ��--ָ��
//	//int(*pa)[]=&arr;
//	//����ָ��---�������ĵ�ַ
//	//������int(*)[]
//	//ǰ��������붨�������������ͬ
//
//	//arr��������Ԫ�صĵ�ַ
//	//&arr[0]��������Ԫ�صĵ�ַ
//	//&arr������ĵ�ַ
//
//	return 0;
//}
