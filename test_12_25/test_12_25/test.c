#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("***********************************************\n");
//	printf("****      1.    play          2.   exit    ****\n");
//	printf("***********************************************\n");
//
//
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret=rand()%100+1;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else 
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//
//		}
//	
//	} while (input);
//	return 0;
//}

//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//
//void main(void)
//{
//    int i;
//
//    /* Seed the random-number generator with current time so that
//     * the numbers will be different every time we run.
//     */
//    srand((unsigned)time(NULL));
//
//    /* Display 10 numbers. */
//    for (i = 0; i < 10; i++)
//        printf("  %6d\n", rand());
//}

//`��������Ϸ
//void menu()
//{
//	printf("**************************************\n");
//	printf("****   1.  play      0.   exit    ****\n");
//	printf("**************************************\n");
//}
////RAND_MAX 0��32767֮��
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	//1.����һ�������
//	ret=rand()%100+1;//����1��100֮�����ֵ
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret) 
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else 
//		{
//			printf("��ϲ�㣬�¶���");
//			break;
//		}
//	}
//}
//int main() 
//{
//	//ʱ�����xxxxx����=��ǰʱ��-�������ʼʱ�䣨1970��1��1��0��0��0��
//	//��ʱ����������������ʼ���
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input) 
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, j *i);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//�Ƚϴ�С��������ֵ
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//����1
//int main()
//{
//
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;
//
//		}
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//    double sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//      sum +=a* 1.0 / i;
//	  a = -a;
//	}
//	printf("%f\n", sum);
//
//	return 0;
//}


//����2
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{//9 19 29 39..... 99
//			count++;
//}
//		if (i / 10 == 9)
//		{//90 91 92 93.....99 �������ǲ��У�������else
//			count++;
//
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

////��100��200֮�������
//// �Գ���
//// ��i���ԣ�2��i-1����һ��
////sqrt�ǿ�ƽ��--#include<math.h>
//int main()
//{
//	int count = 0;
//	int j = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//
//		}
//		if (j >=sqrt(i) )
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//
//	}
//	printf("\ncount=%d ", count);
//
//	return 0;
//}
