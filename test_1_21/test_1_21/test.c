#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>



//int main()
//{
//	unsigned char i = 0;
//	int count = 0;
//	for (i = 0; i < 255; i++)
//	{
//		printf("hello world\n");
//		count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
// 
// 
//int main()
//{
//	char a[1000];//char����ķ�Χ��-128��127ѭ��
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-129�൱��127
//					 //-1��-128+127��1����ҵ� 0 	
//	}					//һ����128+127=255��
//	printf("%d\n", strlen(a));//��\0ֹͣ
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);//#include<Windows.h>

//	}
//
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//
//	return 0;
//}
//10000000000000000000000000010100--- -20ԭ��
//11111111111111111111111111101011--- -20����
// 
//11111111111111111111111111101100 -- -20����
//00000000000000000000000000001010---  10����
// 
//11111111111111111111111111110110----�����Ĳ���
//  
//11111111111111111111111111110101----�����ķ���
//10000000000000000000000000001010-----������ԭ��
//ʮ������-10

//�з��ŵ�char�ķ�Χ��-128��127
//�޷��ŵ�char�ķ�Χ��0��255
//
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//
//	return 0;
//}
//10000000000000000000000010000000
//11111111111111111111111101111111 
//11111111111111111111111110000000 
//����������aǰ�������
//11111111111111111111111110000000 
// 
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001------ԭ��
//	//11111111111111111111111111111110------����
//	//11111111111111111111111111111111------����
//	//��ȡ11111111����
//	//��ӡʱԭ��---��������
//	//�з�������������������λ
//	//1111111111111111111111111111111
//	signed char b = -1;
//	//11111111����
//	//1111111111111111111111111111111
//	unsigned char c = -1;
//	//11111111����
//	//�޷�������������ʱ��0
//	//��ӡ0000000000000000000000011111111
//	printf("%d %d %d \n", a, b, c);
//	
//	return 0;
//}
// 
// 

//int get()
//{
//	int a = 1;
//	//char* p = (char*)&a;
//	return *(char*)&a;
//}
////ָ�����;����������ܷ��ʼ����ֽ�
////ָ������*p+1���������ֽ�
//int main()
//{
//	int ret = get();
//	//����1--С��
//	//����0--���
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p = (char* ) & a;
//	//20
//	//0x00 00 00 14
//	//0x14 00 00 00
//	//*p = 14 != 1
//
//	if (*p == 1)
//		printf("С�˴洢\n");
//	else
//		printf("��˴洢\n");
//	return 0;
//}


//��С��ģʽ
//0x11223344
//���ģʽ����λ���λ����λ���λ  0x11223344
//С��ģʽ����λ���λ����λ���λ 0x44332211
//int main()
//{
//	int a=0x11223344;
//	//С�˴洢
//
//	return 0;
//}
// �޷����� ����ԭ��������ͬ
//����ԭ���һλΪһ��
//������ԭ�����λ���䣬����λ��λȡ��
//�����Ƿ����һ
// �з������Ĵ洢��ԭ������float double����
//���������ڴ�洢���ǲ���
//int main()
//{
//	int a = 20;
//	int b = -10;
//	//unsigned float c=10;
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	float b = 10.0;
//
//	return 0;
//}