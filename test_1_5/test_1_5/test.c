#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>




//数组名表示首元素的地址，但有两个例外
// 1.sizeof(数组名)-整个数组-计算的是整个数组的大小-单位是字节
// 2.&数组名-代表的是整个数组-求得是整个数组的地址
// 
// 
//冒泡排序本质上相邻两个数比较
//在可能的情况下调换顺序
// 
//void bubble_sort(int* arr, int sz)
//{//确定趟数
//	int i = 0;
//	
//	for (i =0 ; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tep = 0;
//				tep = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tep;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//
//}
//int main() 
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//二维数组
//不完全填充用0补齐
//顺序填充，填完换行
//每行可以看成一维数组用{}填充
//行[1]可省，列[2]不能省
//二维数组也是顺序存放，
//各个行连续，每行也连续

//int main() 
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int* p = &arr[0][0];
//	for (i = 1; i <= 12; i++)
//	{
//		printf("%d ", *p);
//			p++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 0,1,2,3,4,5,6 };
//	int arr[3][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p=arr;
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
// 数组是连续排放的
// 数组地址是由低到高排放的
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;[]是下标引用操作符
// 下标从0开始，最后的下标是  元素-1
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("----------------------\n");
//	int i = 0;
//	for (i = 1; i < 10; i++) 
//	{
//		printf("%d ", arr[i]);
//
//	}
//	//printf("%d\n", arr[4]);
//	return 0;
//}


//int main()
//{
//	char ch1[] = "bit";
//	char ch2[] = {'b','i','t' };//字符串的长度是3，但求的是随机数不
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//    //printf("%d\n", strlen(ch1));	
//	//printf("%d\n", strlen(ch2));
//	//[]的数字与元素数相等叫完全初始化
//	//不写默认完全初始化
//	//创建是[]内只能写常量表达式
//	// int n=0;
//	//数组[n]不行，C99语言可以
//
//	return 0;
//}
// 
// 
//double get(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * get(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / get(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret=get(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}