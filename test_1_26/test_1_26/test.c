#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ַ�����
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	//strlen���ַ������ȣ�������\0��ֹͣ
	printf("%d\n",strlen(arr));//�����
	printf("%d\n", strlen(arr+0));//�����
	printf("%d\n", strlen(&arr));//�����
	//printf("%d\n", strlen(*arr));//����a  err
	//printf("%d\n", strlen(arr[1]));//����b err
	printf("%d\n", strlen(&arr+1));//����� �͵�һ����6
	printf("%d\n", strlen(&arr[0]+1));//����� �͵�һ����1


	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 ��������
	//printf("%d\n", sizeof(arr+0));//4/8 arr����Ԫ�ص�ַ arr+0Ҳ����Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));//1 arr����Ԫ�صĵ�ַ *arr����Ԫ��
	//printf("%d\n", sizeof(arr[1]));// 1��һ��Ԫ��
	//printf("%d\n", sizeof(&arr));//4/8 ȡ������ĵ�ַ
	//printf("%d\n", sizeof(&arr+1));//4/8 �������鵽��һ����ַ
	//printf("%d\n", sizeof(&arr[0]+1));//4/8 �ڶ���Ԫ��
	return 0;
}
//��������
//int main()
//{
//	//sizeof(������)---��������
//	//&������-----��������
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));//8
//	printf("%d\n", sizeof(*a));//4 *a������Ԫ��
//	printf("%d\n", sizeof(a+1));//8 a+1�ǵڶ���Ԫ��
//	printf("%d\n", sizeof(a[1]));//8
//	printf("%d\n", sizeof(&a));//8 &a������ĵ�ַ��4/8
//	printf("%d\n", sizeof(*&a));//16 *��&�໥�������൱��a
//	printf("%d\n", sizeof(a+1));//4/8 �����������鵽��һ����ַ
//	printf("%d\n", sizeof(&a[0]));//4/8��һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0]+1));//4/8�ڶ���Ԫ�صĵ�ַ
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
//{   //�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ�����>,<,=�Ƚ�
//	//Ӧ����strcmp�Ƚ�
//	//�����һ�����ڵڶ�����������
//	//���򷵻ظ���
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
//	//(�������ʼ��ַ����������������Ԫ�ظ���������ÿ��Ԫ�صĴ�С������ĺ���)
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
//	//void*���Խ����κ����͵ĵ�ַ
//	//void*���͵�ָ�벻�ܽ��н����ò���
//	//void���͵�ָ�벻�ܽ��мӼ�����
//	void* p = &a;
//	//p++
//	//*p=0
//	//������
//
//	return 0;
//}
//

//void bubble_sort(int arr[], int sz)
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//���ת��
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
//	//ֻ�ܶ�int���͵���������
//	struct std s[3] = { {"zhangsan",10},{"lisi",20},{"wangwu",30} };
//	//���������������͵�����
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}