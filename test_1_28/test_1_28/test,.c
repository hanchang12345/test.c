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
//test ��20���ֽ�

int main()
{
	p = (struct test*)0x100000;
	printf("%p\n", p + 0x1);// 0x100020 test��һ  ����32
	printf("%p\n", (unsigned long)p + 0x1);//0x100001--ת���������μ�һ ���Ǽ򵥵ؼ�һ
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004--ת����int*��һ  ������4���ֽ� ��4

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
//	//printf("%d\n", sizeof(a[0]));//16 a[0]���Կ��ɵ�һ�е���������������ǵ�һ�еĴ�С
//	//printf("%d\n", sizeof(a[0]+1));//4/8  a[0]�ǵ�һ�е�������--��һ�е�һ��Ԫ�صĵ�ַ a[0]+1�ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(*(a[0]+1)));//4 ��һ�еڶ���Ԫ��
//	//printf("%d\n", sizeof(a+1));//4/8 a�Ƕ�ά�����������---����Ԫ�صĵ�ַ  a+1�ǵڶ��еĵ�ַ
//	//printf("%d\n", sizeof(*(a+1)));//16 ����ǵڶ��еĴ�С
//	//printf("%d\n", sizeof(&a[0]+1));//4/8 &a[0]ȡ���ǵ�һ�еĵ�ַ  &a[0]+1�ǵڶ��еĵ�ַ
//	//printf("%d\n", sizeof(*(&a[0]+1)));//16 ����ǵڶ��еĵ�ַ
//	//printf("%d\n", sizeof(*a));//16 a����Ԫ�صĵ�ַ---��һ�еĵ�ַ
//	//printf("%d\n", sizeof(a[3]));//16 sizeof�ڵı��ʽ������㣬����a[3]�൱�ڰ��յ����м���  û����
//	//							 //����û�е�����
//
//
//	//char* p = "abcdef";//������ǳ����ַ�������\0 p��������Ԫ�صĵ�ַ
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p+1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//���ֵ &pȡ��p�ĵ�ַ
//	//printf("%d\n", strlen(&p+1));//���ֵ
//	//printf("%d\n", strlen(&p[0]+1));//5
//
//	//printf("%d\n", sizeof(p));// 4/8
//	//printf("%d\n", sizeof(p+1));// 4/8
//	//printf("%d\n", sizeof(*p));// 1
//	//printf("%d\n", sizeof(p[1]));// 1
//	//printf("%d\n", sizeof(&p));// 4/8  &pȡ��p�ĵ�ַ
//	//printf("%d\n", sizeof(&p+1));// 4/8
//	//printf("%d\n", sizeof(&p[0]+1));// 4/8
//
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7���ֽ� �Զ���\0
//	//printf("%d\n", sizeof(arr+0));//4/8 ���������ĵ�ַ
//	//printf("%d\n", sizeof(*arr));//1 �������Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));//1 ����ǵڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr));//4/8 ���������ĵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(&arr+1));//4/8 ��������������ĵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(&arr[0]+1));//4/8 ���������ڶ���Ԫ�ص�ַ�Ĵ�С
	
//	//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr+0));//6
//	////printf("%d\n", strlen(*arr));//err strlen�����ǵ�ַ a��ASCIIֵ��97���Ƿ�
//	////printf("%d\n", strlen(arr[1]));//err ͬ��
//	//printf("%d\n", strlen(&arr));// 6 &arrȡ����������ĵ�ַ
//	//							 //����ĵ�ַ-����ָ��-char (*p)[7]
//	//							 //char ()[7]-��strlen����������
//	//printf("%d\n", strlen(&arr+1));// ���ֵ ͬ������
//
//	//printf("%d\n", strlen(&arr[0]+1));//5 ͬ������
//	//
//
//
//	return 0;
//}