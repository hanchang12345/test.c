#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//库函数有叫pow
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else 
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

//求各位数的加和
//int get(int n)
//{
//	if (n > 9)
//	{
//		return get(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = get(n);
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*******************************************************\n");
//	printf("****        1,play            2,exit               ****\n");
//	printf("*******************************************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//	printf("开始游戏\n");
//	ret = rand()%100+1;
//	printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜数字>:");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错了，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
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
//		else
//		{
//			printf("恭喜你，找到了，下标是：%d\n", mid);
//			break;
//		}
//
//	}
//
//
//	return 0;
//}


//int Add(int a, int b)
//{
//
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}