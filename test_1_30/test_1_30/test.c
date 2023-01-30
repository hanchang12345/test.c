#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j <line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//		//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <i+1 ; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//		return 0;
//}
// 
//
//代码通用
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		//1.得出i的为数
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		//2.加起来sum
//		tmp = i;
//		while (tmp)
//		{
//			
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.判断是否相等
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d%d", &i, &n);
//	int a = 0;
//	for (a = 0; a < n; a++)
//	{
//		ret = ret * 10 + i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//void nixu(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<=right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);
//	//scanf遇到空格后就结束了
//	//gets()函数可以读取一行，但是在VS2022下没有这个函数
//	nixu(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////			大致的内存布局图和指向关系
////					CP						C
////					C -----------------	>char* 0------ENTER
////					C+1	--------------- >char* 1------NEW
////					C+2	---------------	>char* 2------POINT
////	cpp---------->  C+3(首元素)	-------	>char* 3-----FIRST
//int main()
//{
//	//++cpp后cpp指向的位置就已经改变了
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//    //++cpp后指向c+2再解引用---打印POINT
//	//此时cpp指向c+2
//	printf("%s\n", *--*++cpp+3);//ER
//	//再++cpp指向c+1,解引用进入后--指向了0，然后+3后打印ER
//	//此时cpp指向c+1
//	printf("%s\n", *cpp[-2]+3);//ST
//	//*cpp[-2]==*（*（cpp-2））
//	//cpp-2指向了c+3再解引用进入3后解引用进入，然后+3后打印ST
//	//此时cpp指向了c+3
//	printf("%s\n", cpp[-1][-1]+1);//EW
//	//cpp[-1][-1]==*（*（cpp-1）-1）
//	//cpp-1指向了c+2解引用进入，指向了2
//	//指向2后又-1指向了1后解引用进入，然后+1打印EW
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//
//	return 0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	//类型int(*)[4]
//	p = a;
//	//缺少一个--a比p多一个
//	//int(*)[4]----int(*)[5] 
//	//		FFFFFFFFFFFFFFFC						-4				-4
//	printf("%p  %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//二维数组内是圆括号，不是大括号，说明是逗号表达式
//	//二维数组里只初始化了1 3 5
//	int* p;
//	p = a[0];
//	//p拿到的是数组首元素的地址---是1
//		printf("%d\n", p[0]);
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	//&a+1是跳过数组到下一个地址
//	//再将取得的数据强制转换成int*
//	int* ptr2 = (int*)((int)a + 1);
//	//a是首元素的地址，强制转换成int再加一，在强制转换成int*
//	//相当于地址向前加了一个字符
//	//小端存储
//	//		1	 |		2		|	3	     |	4
//    //01 00 00 00|	02 00 00 00	|03 00 00 00 | 04 00 00 00
//	//地址向前加一后得到的是00 00 00 02
//	//在转换出来时02 00 00 00
//
//	printf("%x %x\n", ptr1[-1], *ptr2);
//	//x86平台上才显示 x64平台上不显示
//	return 0;
//}
