#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 1; 
//	int j = 1;
//	for (i = 1; i <= 9; i++)//行
//	{
//		
//		for (j = 1; j <= i; j++)列
//		{
//			
//			printf("%d*%d=%-2d ", i, j, i*j);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1.0 / i;
//		else
//			sum -= 1.0 / i;
//		
//    }
//	printf("%lf", sum);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum+= flag*1.0 / i;
//		flag = -flag;
//
//	}
//	printf("%lf", sum);
//
//	return 0;
//}


//循环的方式求第n个斐波那契数列数
//顺着加 效率高
//int Fac(int n) 
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) 
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//必须--否则死循环
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//
//	return 0;
//}
//递归求第n个斐波那契数列数
// 倒着求，但效率太低
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//		//统计算过多少3的菲波那切数列数
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}


//
////迭代的方式求n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		 ret = ret * i;
//
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//递归求n的阶乘
//int Fac(int n) 
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
// 
// 
//函数循环的方式求字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	char arr[] = "hanchang";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//函数的递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);//++不行，+1可以
//	else
//		return 0;
//}
//
//int main()
//{
//
//	char arr[] = "hanchang";
//	printf("%d\n", my_strlen(arr));
//
//
//
//	return 0;
//}
