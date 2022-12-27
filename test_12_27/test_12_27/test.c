#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//不用临时变量求字符串的长度
//函数的递归
int my_strlen(char* str) 
{
	if (*str != '\0')
		return 1 + my_strlen(str+1);
	else
		return 0;
}
int main()
{
	char arr[] = "hanchang";
	int len = my_strlen(arr);
	printf("len=%d", len);


	return 0;
}
//int my_strlen(char* str) 
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//
//
//	return 0;
//}

//void print(int n) 
//{
//	if (n > 9)
//	{
// //递归的条件  1，存在限制条件
////			 2，每次递归后都要接近限制条件
//		print(n / 10);
//}
//
//	printf("%d ",n%10);
//}
//int main() 
//{
//
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//
//	return 0;
//}
// 
//int get(int n) 
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for(i=100;i<=200;i++)
//	{ 
//		if (get(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//int get(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//
//		else
//			return mid;
//
//	}
//	return -1;
//
//}
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = get(arr,  k, sz);
//	if (ret == -1)
//	{
//		printf("没找到\n");
//		}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//
//	return 0;
//}