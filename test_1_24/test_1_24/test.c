#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//int main()
//{
//	int(*parr[4])(int, int);
//	//ָ����ָ�������ָ��
//	
//	int(*(*pfarr)[4])(int, int) =&parr;
//
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void menu()
//{
//	printf("******************************************\n");
//	printf("**         1.Add         2.Sub         **\n");
//	printf("**         3.Mul         4.Div         **\n");
//	printf("**         5.Xor         0.exit        **\n");
//	printf("******************************************\n");
//}
////�����Ļص�--ͨ��������ַ�����ú���
//void Calc(int(*pf)(int x, int y))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("����������������:>\n");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	
//	
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	// ����ָ������-----ת�Ʊ�
//	int(*parr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	int sz = sizeof(parr) / sizeof(parr[0]);
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input>=1&&input<=sz)
//		{
//			printf("����������������:>\n");
//			scanf("%d%d", &x, &y);
//			ret = parr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{case 1:
//			printf("����������������:>");
//		    scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 5:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = Xor(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	
//	
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//int(*p)(int, int) = Add;
// //����ָ������
//	int(*p[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", p[i](2, 3));//5 -1 6 0
//	}
//
//	return 0;
//}


//(*(void(*)())0)();
//��0ǿ������ת���ɺ���ָ��--0���Ǻ����ĵ�ַ
//�ú���ָ���޲���������������void
//Ȼ�����0��ָ��ĺ���

//void(*(signal(int, void(*)(int))))(int);
//��˼��signal����������
//signal��������������һ����int���ڶ����Ǻ���ָ��
//�ڶ����˺���ָ��ķ���������void��������int
//signal�ķ��������Ǻ���ָ��
//��ָ��ķ���������void��������int

//��
//typedef void(*p_fun)(int);
//p_fun signal(int, p_fun);
//typedef void(*���������)(int);
//typedef unsigned int uint--���������;


//����ָ��---�溯���ĵ�ַ
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	//&�������ͺ�����һ��
// 
//  //��������(*����--��ʾ��ָ��)(�����βε�����)=������
// 
//	int(*p)(int, int) = Add;
//	//p��Addһ��
//	printf("%d\n", (*p)(2, 3));
//	printf("%d\n", p(2, 3));
//
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	return 0;
//}


//����ָ�봫��
//void test(int** pp)
//{
//	printf("12345 ");
//}
//int main()
//{
//	int n = 0;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	int* arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
// 
// 
//һ��ָ�봫��
//void test(int* p)
//{
//	printf("12345 ");
//}
//void test1(char* pch)
//{
//	printf("12345 ");
//}
//int main()
//{
//	int n = 0;
//	int* p = &n;
//	test(p);
//	test(&n);
//	char ch = 'w';
//	char* pch = &ch;
//	test1(pch);
//	test1(&ch);
//	return 0;
//}


//һά���鴫��
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test(int *arr[10])
//{}
//void test(int **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//��ά���鴫��
// 
//void test(int arr[3][5])
//{}
//void test(int arr[3][])//err
//{} //err
// ���ն�ά����ʱ�п���ʡ���в���ʡ
//void test(int(*p)[5])//OK
//{}
//void test(int *arr[5])//err
//{}
//void test(int** arr)//err
//{}
//int main()
// {
//	int arr[3][5] = { 0 };
//	//������3�����飬��������ʱҪ������ָ�����
//	test(arr);
//
//
//	return 0;
//}