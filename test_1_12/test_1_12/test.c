#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		count++;
//		n = n / 10;
//	}
//	printf("%dλ��\n", count);
//	return 0;
//}

//int [10]�����������
//double Get(int n,int k) 
//{
//	if (k == 0)
//		return 1.0;
//	if (k > 0)
//		return n * Get(n, k - 1);
//	if (k < 0)
//		return 1.0 / Get(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	double ret = Get(n,k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//3:00000000000000000000000000000011
//0:00000000000000000000000000000001
//  00000000000000000000000000000001
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1 == 1)
//			count++;
//
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//int main() 
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	//��λ��򷽷�
//	/*a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;*/
//	//�Ӽ���--�����
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	printf("%d %d\n",a,b);
//	return 0;
//}
//λ������ֻ����������
//&---��λ��--ȫһΪһ
//|---��λ��--��һΪһ
// ^��λ���--ͬΪ0����Ϊһ
//int main()
//{
//	int a = 3;
// //011
// //101
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}
//ֻ����������
//���Ʋ�����<<�൱�ڳ�2
// ����������ұ߲�0
// ���Ʋ�����>>�൱�ڳ�2
// 1.��������
// �ұ���������߼�ԭ����λ
// 2.�߼�����
// �ұ������������0
//int main()
//{
//	int a = 16;
//	int b = a >> 2;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	double a = 5.0/ 2;
//	printf("%lf", a);
//
//	return 0;
//}