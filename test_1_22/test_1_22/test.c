#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//有bug，遇到0就不对了
//int get(int* p)
//{
//	//int sz = sizeof(p) / sizeof(p[0]);用不了
//	int count = 0;
//	while (*p++ != 0)
//	{		
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int arr1[6] = { 1,2,3,4,5 };
//	int arr2[6] = { 2,3,4,5,6 };
//	int arr3[6] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int a = sizeof(parr) / sizeof(parr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < a; i++)
//	{
//		//ret = get(parr[i]);
//		int j = 0;
//		for (i < 0; j < 5; j++)
//		{
//			printf("%d ", * (parr[i] + j));
//		}
//		ret = get(parr[i]);
//		printf("ret=%d\n", ret);
//		printf("\n");
//	}
//	return 0;
//}
 
// 
// 
//剑指数组
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//认为只创建了一个abcdef
//	/*if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");*/
//
//	//认为创建了两个abcdef
//	/*if (arr1 == arr2)
//		printf("hehe\n");
//	else
//		printf("haha\n");*/
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdcef";//常量字符串---->不能改
//	//*p = "hamchang";
//	printf("%s\n", p);
//
//	/*printf("%c\n", *p);
//	printf("%s\n", p);*/
//	/*char ch[] = "abcdef";
//	char* p = &ch;
//	printf("%s\n", ch);
//	printf("%s\n", p);*/
//	return 0;
//}
//浮点数存储和整型存储不同
//（-1）^S  *M  *  2^E
//S决定符号位 0为正，1为负
// M是属于1到2之间的数，可以等于1，不能等于二
// 存储时前面的1不存储，精度高
//存储时 先存符号位（1bit）  再存E（float 32位时是8bit）  最后存M（剩下的)
//								  （double 64位时是11bit）
//0.5---十进制
//0.1---二进制
//（-1）^0 * 1 *2^-1
//E=-1
//规定E为无符号数
//所以当存储32位时以127为界，加127后储存
//    存储64位时以1023为界， 加1023后储存
//float a=9
// 1001
//（-1）^0 * 1.001 * 2^3
//S=0
//M=1.001----储存 001
//E=3-----储存127+3

//E使用时有三种情况
//E中有0有1
//M+1，E-127或-1023
// 
//E为全0
//表示的是特别小的数
//约定M不加1使用 E=1-127或1-1023
//E为全1
//表示的是特别大的数
//如果M全为0表示无穷大

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S=0
//	//M=1.011---011
//	//E=2----129
//	//0 10000001 01100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40B0 0000
//	return 0;
//}
// 

//int main()
//{
//	int a = 9;
//	//00000000000000000000000000001001
//
//	float* p = (float* ) & a;
//	//0 00000000 00000000000000000001001
//	//（-1）^0 * 00000000000000000001001*2^-126
//	//0.0000000000000000001001*2^-126
//	printf("a=%d\n", a);//9
//	printf("p=%f\n", *p);//0.00000
//	*p = 9.0;
//    //1001
//	//E=3
//	//M=1.001
//	//0 10000010 00100000000000000000000
//	printf("a=%d\n", a);//1091567616
//	//01000001000100000000000000000000
//	//1091567616
//	printf("p=%f\n", *p);//9.0
//	return 0;
//}