#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
////输入一组年月，输出多少天
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
//		printf("天数是=%d\n", day);
//	}
//	
//	return 0;
//}

////输入7个数0-100，去出最大，最小后算平均数,输出时保留两位小数
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
//	printf("平均值是=%.2f\n", ret);
//
//	return 0;
//}

//输出X
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


//空间局限性：当开辟了一块空间时，下一次开辟的空间很大概率会开辟到相邻的空间

// 在堆区开辟了两块空间
// 效率较低
// 内存碎片多
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
//	free(ps->arr);//只能先释放arr再释放ps
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//柔性数组前必须有一个变量
//柔性数组开辟在堆区---只开辟了一块空间
//内存碎片较小--效率高
// 方便释放
//柔性数组的使用
//struct S
//{
//	int n;
//	int arr[];
//	或者int arr[0]
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
// #define相当于取代
// 不能 int* p，k 这样定义两个指针
// 其中p是指针，k是int类型
// typedef是类型重命名--把类型重新取了个名字
// 改的名字和double int等的权重一样可以连续定义
// 
//#define E int*
//int main()
//{
//
//	typedef int* D;
//	E a, b;//a是指针，b不是
//	D c, d;//c，d是指针
//	//a=8,b=4,c=8,d=8
//	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
//	return 0;
//}
// 
// 
//局部变量放在栈区，当出函数时会销毁
// 当放在getmomery函数的数组创建后，传回首元素的地址
// 传回后数组销毁，但是传回了地址只是地址指向的数据销毁了
// 所以没有意义
// 加入static后数组的生命周期变长了，会运行成功
// static修饰的变量放在静态区（数据段）
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
//改版2---不传地址
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


//改版1--传地址
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


//代码问题
//1.传的是str，所以p是str的临时拷贝，不会改变str，当出函数是p销毁，内存泄漏
//2.运行完getmemory函数后str还是NULL，所以strcpy不会运行成功
//3.没有free掉开辟的空间

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
//	//这样传的是字符串首元素的地址，然后用地址访问
//}
//int main()
//{
//	test();
//	return 0;
//}

//动态内存开辟的常见错误
//1.空指针---malloc返回的是地址--要判断返回是不是空指针
//2.指针越界访问
//3.free掉的不是动态内存（放在栈区，静态区的变量），还会报错
//4.free掉的是开辟空间的一部分
//5.free多次同一块内存空间---free后置NULL
//6.动态内存开辟使用之后没有释放---内存泄漏
//动态内存开辟的空间只有两种方法1.主动释放 2.程序结束---不是函数结束


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
//		//*p++= i;//err--p指向的位置改变了
//		*(p + i) = i;//p指向的位置不变
//	}
//	free(p);//free掉的只是开辟的一部分，应该free掉全部
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