#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
//strerror�Ǵ�ӡ������Ϣ
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
//	//strtok--�ַ����ָ�
//	//�������� 1.�ָ���ַ�����2.�ָ�ı��
//	// �����ұ�Ƿ����ҵ���ѱ�Ƿ��ĳ�\0
//	// ��¼��Ƿ��ĵ�ַ----static���εı���
//	// ������λ�ĵ�ַ
//	// ��һ��ʹ��ʱֱ�Ӵӱ�Ƿ���ʼ
//	// ͬʱ���û���ص���strtok�����
//	//��ı��ַ��������Դ�����ַ���Ӧ�ÿ��Ըı��ֻ�ǿ���
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
// //strstr���������ַ��������ַ��������ҷ����ҵ��ĵ�һ��λ�õĵ�ַ
// //�Ҳ�������NULL
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)//Ҫ�ж�ret==NULL�������Ⱥ�
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ���: %s\n", ret);
//	}
//	return 0;
//}

//strcat strcpy strcmp----�������Ƶ��ַ�����
//strncat strncpy strncmp----�������Ƶ��ַ�����--�β��и����Ƶ�����

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
//	//�ַ����Ƚϴ�С--strcmp
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
//	//1.�ҵ�dest��\0
//	while (*++dest)//��++��ʹ��
//	{
//		;
//	}
//	//2.����
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
//	//�ַ�������-����ʱ����\0-�����Լ�����
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}