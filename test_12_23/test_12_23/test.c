#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//求闰年的方式1能被4整除但不能被100整除
//			  2能被400整除

//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year=1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		printf("\ncount=%d ", count); 
//	}
//	return 0;
//}

//取最大公约数------辗转取模法
//int main()
//{
//	int r = 0;
//	int m = 18;
//	int n = 27;
//	scanf("%d%d", &m, & n);
//	while (r=m%n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//
//	}
//	printf("%d\n", n);
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	for(i=1;i<100;i++)
//	{
//		if(i%3==0)
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//把三个乱序数字由大到小打印
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//		 // %d与%d之间带什么，输入时就要带着什么	
//	if (a < b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		int tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c)
//	{
//		int tem = b;
//		b = c;
//		c = tem;
//	}
//
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password ,"123456") == 0)
// //==不能用来比较两个字符串是否相等
// //应该用strcmp(password ,"123456") == 0比较--#include<string.h>
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		
//			printf("密码错误，请重新输入"); 
//	
//			
//	}
//	if (i == 3)
//		printf("三次输入均失败，退出程序");
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to changyi";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//----求右下标
//				//strlen求字符串长度时不考虑\n
//				//sizeof求字符串长度时考虑\n
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];//---2中的字符被1中的字符取代
//		printf("%s\n", arr2);
//		Sleep(1000);//中间间隔1秒，()里是毫秒-#include<Windows.h>
//		system("cls");//system是执行系统的函数--cls--清屏-#include<stdlib.h>
//		left++;
//		right--;
//	}	
//	printf("%s\n", arr2);
//	return 0;
//}


//在有序的数组里找特定的数-- 二分法---最大次数 log₂n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//算元素个数
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//算右下标
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//在有序的数组里找特定的数-- 顺序方法（一个个找）
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int z = 1;
//	int i = 0;
//	int sum = 0;
//	for (n=1;n<=3;n++) n的阶乘和阶乘的和
//	{
//			z = z * n;
//		 sum = sum + z;
//	}
//	printf("sum=%d\n", sum);
//	printf("z=%d\n", z);
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int z = 1;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		z = z * i;
//		
//	}
//	printf("z=%d\n", z);
//	return 0;
//}