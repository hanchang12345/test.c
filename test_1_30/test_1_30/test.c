#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j <line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//		//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <i+1 ; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//		return 0;
//}
// 
//
//����ͨ��
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		//1.�ó�i��Ϊ��
//		int tmp = i;
//		int sum = 0;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		//2.������sum
//		tmp = i;
//		while (tmp)
//		{
//			
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�ж��Ƿ����
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d%d", &i, &n);
//	int a = 0;
//	for (a = 0; a < n; a++)
//	{
//		ret = ret * 10 + i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//void nixu(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left<=right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);
//	//scanf�����ո��ͽ�����
//	//gets()�������Զ�ȡһ�У�������VS2022��û���������
//	nixu(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////			���µ��ڴ沼��ͼ��ָ���ϵ
////					CP						C
////					C -----------------	>char* 0------ENTER
////					C+1	--------------- >char* 1------NEW
////					C+2	---------------	>char* 2------POINT
////	cpp---------->  C+3(��Ԫ��)	-------	>char* 3-----FIRST
//int main()
//{
//	//++cpp��cppָ���λ�þ��Ѿ��ı���
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//    //++cpp��ָ��c+2�ٽ�����---��ӡPOINT
//	//��ʱcppָ��c+2
//	printf("%s\n", *--*++cpp+3);//ER
//	//��++cppָ��c+1,�����ý����--ָ����0��Ȼ��+3���ӡER
//	//��ʱcppָ��c+1
//	printf("%s\n", *cpp[-2]+3);//ST
//	//*cpp[-2]==*��*��cpp-2����
//	//cpp-2ָ����c+3�ٽ����ý���3������ý��룬Ȼ��+3���ӡST
//	//��ʱcppָ����c+3
//	printf("%s\n", cpp[-1][-1]+1);//EW
//	//cpp[-1][-1]==*��*��cpp-1��-1��
//	//cpp-1ָ����c+2�����ý��룬ָ����2
//	//ָ��2����-1ָ����1������ý��룬Ȼ��+1��ӡEW
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//
//	return 0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	//����int(*)[4]
//	p = a;
//	//ȱ��һ��--a��p��һ��
//	//int(*)[4]----int(*)[5] 
//	//		FFFFFFFFFFFFFFFC						-4				-4
//	printf("%p  %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//��ά��������Բ���ţ����Ǵ����ţ�˵���Ƕ��ű��ʽ
//	//��ά������ֻ��ʼ����1 3 5
//	int* p;
//	p = a[0];
//	//p�õ�����������Ԫ�صĵ�ַ---��1
//		printf("%d\n", p[0]);
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	//&a+1���������鵽��һ����ַ
//	//�ٽ�ȡ�õ�����ǿ��ת����int*
//	int* ptr2 = (int*)((int)a + 1);
//	//a����Ԫ�صĵ�ַ��ǿ��ת����int�ټ�һ����ǿ��ת����int*
//	//�൱�ڵ�ַ��ǰ����һ���ַ�
//	//С�˴洢
//	//		1	 |		2		|	3	     |	4
//    //01 00 00 00|	02 00 00 00	|03 00 00 00 | 04 00 00 00
//	//��ַ��ǰ��һ��õ�����00 00 00 02
//	//��ת������ʱ02 00 00 00
//
//	printf("%x %x\n", ptr1[-1], *ptr2);
//	//x86ƽ̨�ϲ���ʾ x64ƽ̨�ϲ���ʾ
//	return 0;
//}
