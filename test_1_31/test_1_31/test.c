#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//���������
//	while (left<right)
//	{
//		while ((left<right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�ұ���ż��
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//
//	}
//	return 0;
//}
//int main()
//{
//	//����ˮ1Ԫ1ƿ��2����ƿ��һƿ
//	//��ƿ0.5Ԫ
//	//���һ����ʣ��һ����ƿ
//	//20Ԫ�ỻ40����ƿ-1=39
//
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//	printf("total=%d\n", total);
//	return 0;
//}


//int main()
//{
//	//����ˮ1Ԫ1ƿ��2����ƿ��һƿ
//    //��ƿ0.5Ԫ
//    //���һ����ʣ��һ����ƿ
//    //20Ԫ�ỻ40����ƿ-1=39
//
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	//�������
//	total = money;
//	empty = money;
//	//��������
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//
//	}
//
//	printf("total=%d\n", total);
//	return 0;
//}

//int main()
//{
//	int a ,b ,c;
//	scanf("%d%d%d", &a, &b, &c);
//	int ret = a > b ? (a > c ? a : c) : (b > c ? b : c);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}