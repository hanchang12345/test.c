#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int(*parr[10])[5]
// parr是数组 有10个元素
// 每个元素的类型是数组指针 int(*)[5]
// 每个数组指针指向的数组有5个元素
 
 
//数组的形式
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
//指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//		    //	            *(p + i) = 二维数组里的一维数组
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
//	//[]的优先级高于*
//	int* p1 = NULL;
//	//整形指针--存放整形的地址
//	char* p = NULL;
//	//字符指针---存放字符的地址
//	//int arr[10];
//	//数组指针--指针
//	//int(*pa)[]=&arr;
//	//数组指针---存放数组的地址
//	//类型是int(*)[]
//	//前面的类型与定义数组的类型相同
//
//	//arr是数组首元素的地址
//	//&arr[0]是数组首元素的地址
//	//&arr是数组的地址
//
//	return 0;
//}
