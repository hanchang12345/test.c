#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct test
{
	int num;
	char* n;
	short s;
	char cha[2];
	short duf[4];
}*p;
//test 是20个字节

int main()
{
	p = (struct test*)0x100000;
	printf("%p\n", p + 0x1);// 0x100020 test加一  加了32
	printf("%p\n", (unsigned long)p + 0x1);//0x100001--转换成了整形加一 就是简单地加一
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004--转换成int*加一  跳过了4个字节 加4

}




//size_t  strlen(
//	const char* str
//)
//{
//	const char* eos = str;
//
//	while (*eos++);
//
//	return(eos - str - 1);
//}
//int main()
//{
//	printf("%d ", strlen("hello"));
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d\n", *(a + 1), *(ptr - 1));
//
//	return 0;
//}

//int main()
//{
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));//48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0]));//16 a[0]可以看成第一行的数组名，计算的是第一行的大小
//	//printf("%d\n", sizeof(a[0]+1));//4/8  a[0]是第一行的数组名--第一行第一个元素的地址 a[0]+1是第一行第二个元素的地址
//	//printf("%d\n", sizeof(*(a[0]+1)));//4 第一行第二个元素
//	//printf("%d\n", sizeof(a+1));//4/8 a是二维数组的数组名---是首元素的地址  a+1是第二行的地址
//	//printf("%d\n", sizeof(*(a+1)));//16 算的是第二行的大小
//	//printf("%d\n", sizeof(&a[0]+1));//4/8 &a[0]取得是第一行的地址  &a[0]+1是第二行的地址
//	//printf("%d\n", sizeof(*(&a[0]+1)));//16 算的是第二行的地址
//	//printf("%d\n", sizeof(*a));//16 a是首元素的地址---第一行的地址
//	//printf("%d\n", sizeof(a[3]));//16 sizeof内的表达式不会计算，所以a[3]相当于按照第四行计算  没错误
//	//							 //但是没有第四行
//
//
//	//char* p = "abcdef";//定义的是常量字符串，带\0 p里面是首元素的地址
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p+1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//随机值 &p取出p的地址
//	//printf("%d\n", strlen(&p+1));//随机值
//	//printf("%d\n", strlen(&p[0]+1));//5
//
//	//printf("%d\n", sizeof(p));// 4/8
//	//printf("%d\n", sizeof(p+1));// 4/8
//	//printf("%d\n", sizeof(*p));// 1
//	//printf("%d\n", sizeof(p[1]));// 1
//	//printf("%d\n", sizeof(&p));// 4/8  &p取出p的地址
//	//printf("%d\n", sizeof(&p+1));// 4/8
//	//printf("%d\n", sizeof(&p[0]+1));// 4/8
//
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7个字节 自动加\0
//	//printf("%d\n", sizeof(arr+0));//4/8 算的是数组的地址
//	//printf("%d\n", sizeof(*arr));//1 算的是首元素的大小
	//printf("%d\n", sizeof(arr[1]));//1 算的是第二个元素的大小
	//printf("%d\n", sizeof(&arr));//4/8 算的是数组的地址的大小
	//printf("%d\n", sizeof(&arr+1));//4/8 算的是跳过数组后的地址的大小
	//printf("%d\n", sizeof(&arr[0]+1));//4/8 算的是数组第二个元素地址的大小
	
//	//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr+0));//6
//	////printf("%d\n", strlen(*arr));//err strlen传的是地址 a的ASCII值是97，非法
//	////printf("%d\n", strlen(arr[1]));//err 同上
//	//printf("%d\n", strlen(&arr));// 6 &arr取出的是数组的地址
//	//							 //数组的地址-数组指针-char (*p)[7]
//	//							 //char ()[7]-和strlen参数不兼容
//	//printf("%d\n", strlen(&arr+1));// 随机值 同理报警告
//
//	//printf("%d\n", strlen(&arr[0]+1));//5 同理报警告
//	//
//
//
//	return 0;
//}