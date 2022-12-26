#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#include"add.h"
////声明自己的头文件用""
////声明在头文件，定义在源文件
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d ", sum);
//
//	return 0;
//}


//void Add(int* p)
//{
//	//*p++;  ++的优先级高，认为是p++
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num); 
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

////				接受的本质上是一个指针
//int binary_search(int arr[], int k,int sz) 
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//函数内不能用这种方法算右下标
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right) 
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		//				传输的是数组的第一个元素的地址
//	int ret = binary_search(arr, k,sz);
//		if(ret==-1)
//		{
//			printf("没找到");
//		}
//		else
//		{
//			printf("找到了。下标是：%d ", ret);
//		}
//
//	return 0;
//} 
// 
// 
//计算闰年
// 不要在函数体内部打印，关联性太大
//int is_leap_year(int y) 
//{
//	if (y % 4 == 0 && y % 100 != 0)
//		return 1;
//	else if (y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((is_leap_year(year) == 1))
//		{
//			printf("%d ",year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//int is_prime(int n) 
//{
//	int j = 0;
//	for (j = 2; j < n; j ++ ) 
//	{
//		if (n % j == 0)
//			return 0;
//
//	}
//	return 1;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ",i);
//
//		}
//	}
//	return 0;
//}
// 
// 
//两数交换时不能用整形，不能改变，只能用指针。
// 形参实例化相当于时实参的一份临时拷贝
// 对形参的修改不会影响实参
//void Swap1(int x, int y) 
//{
//	int tem = 0;
//	tem = x;
//	x = y;
//	y = tem;
//}
//void Swap2(int* x,int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n ", a, b);
//	//传值调用，只把值传过去，不改变
//	Swap1(a,b);
//	//传址调用，把地址传过去，函数可以改变值
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n ", a, b);
//	return 0;
//}




//int get_max(int x, int y)
//{
//	//三目操作符--return x > y ? x : y;
//	//if (x > y)
//	//	return x;
//	//else
//	//	return y;
//}
//int main()
//{
//	int a = 110;
//	int b = 500;
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	max= get_max(2023, 15026);
//	printf("max=%d\n", max); 
//	return 0;
//}
// 
// 
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	//memset(想替换的数组，替换的内容，替换的个数)
//	printf("%s\n", arr);
//
//	return 0;
//}
//



//int main()
//{
//	char arr1[] = "hanchang";
//	char arr2[20] = "##############";
//	strcpy(arr2, arr1);
// strcpy(目的地，源头)-----#include<string.h>
// 
// 
//	printf("%s\n", arr2);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}