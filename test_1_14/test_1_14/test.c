#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////Ұָ��------Σ��
////1.ָ��δ����ʼ��
////2.ָ��Խ�����
////3.ָ��ָ��Ŀռ��Ѿ��ͷ�
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
//	//ָ�����;�����ָ����һ���Ĳ���
//	//int*p+1----4���ֽ�
//	//char*p+1----1���ֽ�
//	//double*p+1----8���ֽ�
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
//	//ָ�����;������Խ����ü����ֽ�
//	//int*--4���ֽ�
//	//char*--1���ֽ�
//	//double*--8���ֽ�
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
// ����д������ȷ����֪����׼����߻����ұ�
// ���ֽ��
//	printf("%d\n", b);
//	return 0;
//}
//

//int main()
//{
// //%u �޷���ʮ��������
//	char a = 1;
//	printf("%u\n", sizeof(a));
//	printf("%u\n", sizeof(+a));
//	printf("%u\n", sizeof(!a));
//	return 0;
//}
//int main()
//{
//	//��������������λ
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

//����һ���ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20] ;
//	int age;
//	char id[20];
//};
//int main()
//{
//	//ʹ��struct stu����ṹ�����ʹ���һ��s1
//	struct stu s1 = { "hanchang",20,"hanchang" };
//
//	//->�ṹ��ָ�������
//	//�ṹ��ָ��->��Ա������
//	/*struct stu* ps = &s1;
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->id);*/
//
//	//��ָ��ķ�����
//	/*struct stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//	//.������  �ṹ�������.��Ա������
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
//||�ǵ�����1��ʱ�����������
//&&�ǵ�����0��ʱ������������
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
//	// ��λ��
//	//00000000000000000000000000000100
//	//00000000000000000000000000001111
//	//
//	a=a | (1<<2);
//	printf("%d\n", a);//15
//	//00000000000000000000000000001111
//	// ��λ��
//	//00000000000000000000000000000100
//	//11111111111111111111111111111011
//	//00000000000000000000000000001011
//	a=a&(~(1<<2));
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{//~��������λȡ��
//	int a = 0;
//	//00000000000000000000000000000000--ԭ �� ����
//	//11111111111111111111111111111111--ȡ�� ����
//	//11111111111111111111111111111110--����
//	//10000000000000000000000000000001--ԭ��
//	a = ~a;
//	printf("%d\n", a);
//
//	return 0;
//}

//sizeof(�������ʽ����������)
//int main()
//{
//	short s = 0;//2���ֽ�
//	int a = 10;//4���ֽ�
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