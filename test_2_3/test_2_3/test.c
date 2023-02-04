#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stddef.h>
#include<stdlib.h>
//栈区---局部变量，函数形参
//堆区---动态内存
//静态区（数据段）----全局变量，静态变量

//malloc和calloc函数的区别
//malloc函数参数是算出来的和，而calloc是有两个参数1.元素个数 2.元素大小（字节）
//malloc不会进行初始化，而calloc会将开辟的空间初始化为0
//malloc和calloc使用的步骤相同
//free函数只会释放堆区的内存----不会初始化指针---手动将指针变为NULL
// 
// realloc--两个参数1.原来开辟的空间的地址，2.要改的开辟空间大小
// realloc函数是改变栈区开辟的内存的大小
// realloc函数有三种情况
// 1.开辟的空间后有足够的内存--返回原地址
// 2.不够---在堆区上找到一块合适的空间开辟，把原来的数据拷贝到刚开辟的空间
//			然后释放掉原来的空间，返回新空间的地址
// 3.不够--找不到合适的空间---返回NULL
// int *p = (int*)realloc(NULL,40) = malloc和他的作用一样
// 
// 
// 
//动态内存开辟---放在堆区
//malloc free realloc calloc
//int main()
//{
//	int arr[] = { 0 };//栈区
//	//开辟
//	int* p = (int* )malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", p[i]);
//	}
//	//释放
//	free(p);
//	//置空指针
//	p = NULL;
//	return 0;
//}

//1.
//int check(void)
//{
//	int a = 1;
//	if ((*(char*)&a) == 1)
//	{
//		return 1;//小端
//	}
//	else
//	{
//		return 0;
//	}
//}
//2.
//int check(void)
//{
//	union un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	
//	int ret = check();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
////联合体--共用一块空间--至少是最大成员的大小
////struct enum union 
// //联合体也是要对齐，最大对齐数的最大整数倍
//union un
//{
//	int a;
//	char b;
//
//};
//
//int main()
//{
//	union un u = { 0 };
//	return 0;
//}
//枚举类型
//更好编译调试
//比define定义的常量来说有某种意义
//define定义的是全局的，而枚举定义的是enum的，是局部的
//define定义的在预编译时就会改，而枚举定义的会转换成exe文件后再改
//enum color
//{
//	//枚举类型的成员是常量
//	//可以赋初始值--赋的值是int
//	red=5,
//	blue,
//	green
//};
//int main()
//{
//	//cpp语法的检查更严格
//	enum color c = red;
//	//red = 5;---不行
//	printf("%d\n", red);
//	return 0;
//}
//struct A
//{
//	//位端--不夸平台
//	//按类型所占的字节数开辟空间
//	//：数字->是变量所占的空间--单位是比特位
//	//只能用整形家族来定义变量（char也是）
//	//原因是生活中某些数据的大小是固定的
//	//比如性别：男 女 保密 --只有三种可能
//
//	int a : 2;
//	int b : 5;
//	int c : 15;
//	int d : 30;//数字不能太大
//};
//
//int main()
//{
//	printf("%d\n",sizeof(struct A));//8个字节
//	return 0;
//}


//#pragma pack(2)//更改默认对齐数为2，一般改为2的次方倍 
//struct S 
//{
//	int a;
//	char b;
//	double c;
//};
//#pragma pack()//改回来
//int main()
//{
//	//为了节省空间，一般把小类型的放在一起
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, b));
//	printf("%d\n", offsetof(struct S, c));
//	//offsetof是宏--用来求偏移量的----#include<stddef.h>
//
//	return 0;
//}

//结构体内存对齐
//结构体变量的第一个成员永远放在偏移量为0的地址处
//第二个成员开始，放在对齐数的整数的整数倍的地址处
//对齐数=编辑器默认的数与成员的字节大小
//VS编辑器默认为8
//结构体变量的总大小是最大对齐数的整数倍（放得下所有结构体成员的最小整数）
//嵌套结构体的情况，嵌套的结构体对齐到自己最大的对齐数的整数倍处
//结构体的总大小等于所有对齐数（含嵌套的结构体的对齐数）的整数倍

//原因
//1.硬件原因：不是所有的平台都可以拿到任意地址的数据，只能拿到特定的地址
//2.性能原因：数据结构（尤其是栈）应该尽可能的存放在自然边界上对齐
//				
// 因为数据读取时对齐对数据的读取可能只需要1次，不对齐需要多次
//空间换时间的做法

//struct S
//{
//	int i;//4个字节
//	char ch1;//1个字节--5
//	char ch2;//1个字节--6
//	double c;//8个字节--8
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//
//
//
//	return 0;
//}

//int main()
//{
//	int x = 12;
//	while (x--);
//	printf("%d\n", x);
//
//
//	return  0;
//}