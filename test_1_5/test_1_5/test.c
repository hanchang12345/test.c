#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>




//��������ʾ��Ԫ�صĵ�ַ��������������
// 1.sizeof(������)-��������-���������������Ĵ�С-��λ���ֽ�
// 2.&������-���������������-�������������ĵ�ַ
// 
// 
//ð���������������������Ƚ�
//�ڿ��ܵ�����µ���˳��
// 
//void bubble_sort(int* arr, int sz)
//{//ȷ������
//	int i = 0;
//	
//	for (i =0 ; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tep = 0;
//				tep = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tep;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//
//}
//int main() 
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//��ά����
//����ȫ�����0����
//˳����䣬���껻��
//ÿ�п��Կ���һά������{}���
//��[1]��ʡ����[2]����ʡ
//��ά����Ҳ��˳���ţ�
//������������ÿ��Ҳ����

//int main() 
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int* p = &arr[0][0];
//	for (i = 1; i <= 12; i++)
//	{
//		printf("%d ", *p);
//			p++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 0,1,2,3,4,5,6 };
//	int arr[3][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p=arr;
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
// �����������ŷŵ�
// �����ַ���ɵ͵����ŷŵ�
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;[]���±����ò�����
// �±��0��ʼ�������±���  Ԫ��-1
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("----------------------\n");
//	int i = 0;
//	for (i = 1; i < 10; i++) 
//	{
//		printf("%d ", arr[i]);
//
//	}
//	//printf("%d\n", arr[4]);
//	return 0;
//}


//int main()
//{
//	char ch1[] = "bit";
//	char ch2[] = {'b','i','t' };//�ַ����ĳ�����3����������������
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//    //printf("%d\n", strlen(ch1));	
//	//printf("%d\n", strlen(ch2));
//	//[]��������Ԫ������Ƚ���ȫ��ʼ��
//	//��дĬ����ȫ��ʼ��
//	//������[]��ֻ��д�������ʽ
//	// int n=0;
//	//����[n]���У�C99���Կ���
//
//	return 0;
//}
// 
// 
//double get(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * get(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / get(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret=get(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}