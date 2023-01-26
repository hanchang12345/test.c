#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//字符数组
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	//strlen求字符串长度，不遇到\0不停止
	printf("%d\n",strlen(arr));//随机数
	printf("%d\n", strlen(arr+0));//随机数
	printf("%d\n", strlen(&arr));//随机数
	//printf("%d\n", strlen(*arr));//传了a  err
	//printf("%d\n", strlen(arr[1]));//传了b err
	printf("%d\n", strlen(&arr+1));//随机数 和第一个差6
	printf("%d\n", strlen(&arr[0]+1));//随机数 和第一个差1


	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 整个数组
	//printf("%d\n", sizeof(arr+0));//4/8 arr是首元素地址 arr+0也是首元素地址
	//printf("%d\n", sizeof(*arr));//1 arr是首元素的地址 *arr是首元素
	//printf("%d\n", sizeof(arr[1]));// 1第一个元素
	//printf("%d\n", sizeof(&arr));//4/8 取出数组的地址
	//printf("%d\n", sizeof(&arr+1));//4/8 跳过数组到下一个地址
	//printf("%d\n", sizeof(&arr[0]+1));//4/8 第二个元素
	return 0;
}
//整形数组
//int main()
//{
//	//sizeof(数组名)---整个数组
//	//&数组名-----整个数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));//8
//	printf("%d\n", sizeof(*a));//4 *a代表首元素
//	printf("%d\n", sizeof(a+1));//8 a+1是第二个元素
//	printf("%d\n", sizeof(a[1]));//8
//	printf("%d\n", sizeof(&a));//8 &a是数组的地址，4/8
//	printf("%d\n", sizeof(*&a));//16 *和&相互抵消，相当于a
//	printf("%d\n", sizeof(a+1));//4/8 跳过整个数组到下一个地址
//	printf("%d\n", sizeof(&a[0]));//4/8第一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1));//4/8第二个元素的地址
//
//	return 0;
//}
// 
// 
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void swap(char* buf1,char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//void bubble_sort(void* base, int sz, int width,int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//			
//		}
//	}
//}
//void test()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp );
//	/*int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//}
//int main()
//{
//	test();	
//	return 0;
//}



//struct std
//{
//	char name[20];
//	int age;
//};
//int cmp_name(const void* e1, const void* e2)
//{   //比较名字就是比较字符串
//	//字符串比较不能用>,<,=比较
//	//应该用strcmp比较
//	//如果第一个大于第二个返回正数
//	//否则返回负数
//	return strcmp(((struct std*)e1)->name, ((struct std*)e2)->name);
//
//}
////int cmp_age(const void* e1, const void* e2)
////{
////	return ((struct std*)e1)->age - ((struct std*)e2)->age;
////
////}
//int main()
//{
//	struct std s[3] = { {"zhangsan",30},{"lisi",10},{"wangwu",40} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz,sizeof(s[0]), cmp_age);
//	qsort(s, sz, sizeof(s[0]), cmp_name);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", s[i].name);
//		printf("%d\n", s[i].age);
//	}
//
//	return 0;
//}


//int cmp(const void* e1, const void* e2)
//{
//  // return (int)*(int*)e1 - *(int*)e2;
//	if ((*(int*)e1 - *(int*)e2) == 0)
//		return 0;
//	else if ((*(int*)e1 - *(int*)e2) > 0)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.5,4.6 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//	return 0;
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//(数组的起始地址（数组名），数组元素个数，数组每个元素的大小，定义的函数)
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//
//	int a = 10;
//	//char* pa = &a;
//	//void*可以接收任何类型的地址
//	//void*类型的指针不能进行解引用操作
//	//void类型的指针不能进行加减运算
//	void* p = &a;
//	//p++
//	//*p=0
//	//都不行
//
//	return 0;
//}
//

//void bubble_sort(int arr[], int sz)
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//完成转换
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct std
//{
//	char name[20];
//	int agel
//};
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//只能对int类型的数组排序
//	struct std s[3] = { {"zhangsan",10},{"lisi",20},{"wangwu",30} };
//	//不能排序其他类型的数组
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}