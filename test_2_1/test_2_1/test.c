#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
//strerror是打印错误信息
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
// 
// 
// 
//
//int main()
//{
//	//strtok--字符串分割
//	//两个参数 1.分割的字符串，2.分割的标记
//	// 往后找标记符，找到后把标记符改成\0
//	// 记录标记符的地址----static修饰的变量
//	// 返回首位的地址
//	// 下一次使用时直接从标记符开始
//	// 同时调用或多重调用strtok会出错
//	//会改变字符串，所以传入的字符串应该可以改变或只是拷贝
//	char arr1[] = "hanchang@outlook.com";
//	char tmp[100] = { 0 };
//	char* ret = NULL;
//	char* p = "@.";
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//char* my_strstr(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//	if (*str2 == '\0')
//	{
//		return (char* )str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2; 
//		//abcdef\0
//		//  cdef\0
//		while ((*s1 == *s2) && *s1 && *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char* )cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbcq";
// //strstr函数是在字符串里找字符串，并且返回找到的第一个位置的地址
// //找不到返回NULL
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)//要判断ret==NULL，两个等号
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了: %s\n", ret);
//	}
//	return 0;
//}

//strcat strcpy strcmp----是无限制的字符函数
//strncat strncpy strncmp----是有限制的字符函数--形参有个限制的数字

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1==*s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	////3.
//	return *s1 - *s2;
//	////2.
//	//return *s1 > *s2 ? 1 : (-1);
//
//
//	////1.
//	//if (*s1 > *s2)
//	//	return 1;
//	//else
//	//	return -1;
//
//
//}
//int main()
//{
//	//字符串比较大小--strcmp
//	char* p = "abcd";
//	char* q = "abbb";
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret == 0)
//	{
//		printf("p==q\n");
//	}
//	else
//	{
//		printf("p<q\n");
//	}
//	return 0;
//}
// 
 

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找到dest的\0
//	while (*++dest)//先++再使用
//	{
//		;
//	}
//	//2.交换
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	//my_strcat(arr1, arr2);
//	//strcat(arr1, arr2);
//	//字符串连接-连接时加入\0-不能自己增加
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}