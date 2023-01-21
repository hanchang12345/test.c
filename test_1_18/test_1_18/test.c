#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>



//int get(int a)
//{
//	int count = 0;
//		while (a = a & (a - 1))
//		{
//			count++;
//		}
//
//		return count+1;
//
//}

//int get(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if ((a % 2) == 1)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	return count;
//}


//int get(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1 )== 1)
//		{
//			count++;
//
//		}
//	}
//	return count;
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = get(a);
//	printf("ret=%d\n", ret);
//	return 0;
//
//}


//size-t-----unsigned int---无符号整形
//
//size_t my_strlen(const char* arr2)
//{
//	size_t count = 0;
//	assert(arr2 != NULL);
//	while (*arr2 != '\0')
//	{
//		if (*arr2++ != '\0')
//		{			
//			count++;
//		}
//
//	}
//	return count;
//
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//
//	my_strlen(arr1);
//	//printf("%d\n", strlen(arr1));
//	printf("%d\n", my_strlen(arr1));
//	return 0;
//}


//
//int main()
//{
//	const int num = 0;
//	int n = 0;
//	int* const p = &num;
//	p = &n;
//	*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}
//
//char* my_strcpy(char* dest, const char* src)
//{
// //const定义常变量----不能直接改，可以通过指针改
// //int const *p
// //可以p=&n不可以*p=20
// //int * const p
// //可以*p=20不可以p=&n
// //
//	assert(dest != NULL);//判断是否是空指针
//	assert(src != NULL);
//	char* ret = dest;
//	//do
//	//{
//	//	*dest = *src;
//	//	//dest++;
//	//	//src++;
//	//} while (*dest++ = *src++);
//	//	//*dest = *src;
//
//
//	/*for (; *dest++ = *src++; dest++, src++)
//	{
//		*dest = *src;
//	}*/
//	//*dest = *src;
//
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2 [] = "hello";
//	//strcpy(arr1,arr2);
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//  int  ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		
//		for (ret=1,i = 1; i <= j; i++)
//		{
//			ret *= i;
//			
//		}
//		sum += ret;
//	}
//	printf("%d\n", ret);
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
// 
//			ret *=  i;
//			sum += ret;
//	}	
//	printf("%d\n", sum);
//	printf("%d\n", ret);
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//
//	test1();
//}
//int main()
//{
//	test();
//
//	return 0;
//}


// F5---开始调试
// F9---设置/取消断点
// F10---逐过程
// F11---逐语句
// Ctrl+F5----运行代码
//int test()
//{
//	int a = 8;
//	int b = 9;
//	int c = 0;
//	c = a + b;
//	return c;
//}
//int main()
//{
//
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//while (i < sz)
//	//{
//	//	arr[i] = i + 1;
//	//	i++;
//	//	printf("%d ", arr[i]);
//	//}
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//
//		
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		test();
//
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
