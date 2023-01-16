#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////野指针------危险
////1.指针未被初始化
////2.指针越界访问
////3.指针指向的空间已经释放
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//int main()
//{
//	//指针类型决定了指针走一步的步长
//	//int*p+1----4个字节
//	//char*p+1----1个字节
//	//double*p+1----8个字节
//	int a = 0;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}


//int main()
//{
//	//指针类型决定可以解引用几个字节
//	//int*--4个字节
//	//char*--1个字节
//	//double*--8个字节
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}
//
//int main()
//{
//	int c = 1;
//	int b= c + --c;
// 这种写法不正确，不知道先准备左边还是右边
// 两种结果
//	printf("%d\n", b);
//	return 0;
//}
//

//int main()
//{
// //%u 无符号十进制整数
//	char a = 1;
//	printf("%u\n", sizeof(a));
//	printf("%u\n", sizeof(+a));
//	printf("%u\n", sizeof(!a));
//	return 0;
//}
//int main()
//{
//	//整形提升补符号位
//
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011
//	char b = 127;
//    //00000000000000000000000001111111
//	//01111111
//	char c = a + b;
//	//a+b
//	//01111111+00000011
//	
//	printf("%d\n", c);
//	return 0;
//}

//创建一个结构体类型
//struct stu
//{
//	//成员变量
//	char name[20] ;
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct stu这个结构体类型创建一个s1
//	struct stu s1 = { "hanchang",20,"hanchang" };
//
//	//->结构体指针操作符
//	//结构体指针->成员变量名
//	/*struct stu* ps = &s1;
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->id);*/
//
//	//用指针的方法找
//	/*struct stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//	//.操作符  结构体变量名.成员变量名
//	/*printf("%d\n", s1.age);
//	printf("%s\n", s1.name);
//	printf("%s\n", s1.id);*/
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = 0;
//	max = (a > b ? a : b);
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	printf("%d\n", max);
//	return 0;
//}
//||是当出现1的时候或的运算结束
//&&是当出现0的时候与的运算结束
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a=%d b=%d c=%d d=%d", a, b, c, d);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//	
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n",sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//int main()
//{
//	int a = 11;
//	//00000000000000000000000000001011
//	// 按位或
//	//00000000000000000000000000000100
//	//00000000000000000000000000001111
//	//
//	a=a | (1<<2);
//	printf("%d\n", a);//15
//	//00000000000000000000000000001111
//	// 按位与
//	//00000000000000000000000000000100
//	//11111111111111111111111111111011
//	//00000000000000000000000000001011
//	a=a&(~(1<<2));
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{//~按二进制位取反
//	int a = 0;
//	//00000000000000000000000000000000--原 反 补码
//	//11111111111111111111111111111111--取反 补码
//	//11111111111111111111111111111110--反码
//	//10000000000000000000000000000001--原码
//	a = ~a;
//	printf("%d\n", a);
//
//	return 0;
//}

//sizeof(里面的算式不参与运算)
//int main()
//{
//	short s = 0;//2个字节
//	int a = 10;//4个字节
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s); 
//	return 0;
//}

//
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", n);
//	return 0;
//}