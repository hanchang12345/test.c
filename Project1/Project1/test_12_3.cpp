#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	do {
//		
//		if (i == 5)
//		continue;---�����˴�ѭ�����������ˣ���ѭ����
//		printf("%d\n", i);
//		i++;
//
//	} while (i<=10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;//--û���ж���䣬ֻ�и�ֵ��k=0Ϊ�٣���ѭ��
//	for (i = 0, k = 0; k=0 ; i++, k++)
//		printf("hehe\n");
//	return 0;
//}


//int main()
//{
//	int j = 0;
//	int i = 0;
//	for (i=0;i<2 ;i++)
//	{
//		for (j=0; j < 3;j++) 
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
// 10 ��ѭ��
// 10 �δ�ӡ
// 10 ��Ԫ��
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//	return 0;
//}


//for while�е�break continue����һ������
// break����ѭ��
// continue��������ѭ��-----for������ѭ�� while���ܻ���ѭ��
// forѭ������ʹ��ǰ�պ�ʽд��
// forѭ����Ҫ��ѭ�����ڲ��ı���������׵���bug
// forѭ���ĳ�ʼ�����������ж϶�����ʡ��
// forѭ���ж�ʡ�ԵĻ������жϺ�Ϊ��
// int main() 
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//


//int main() {   
//	int ch = 0;
//	int ret = 0;
//char password[20] = { 0 };
//	printf("����������:>" );
//	scanf("%s", password);
////	while ((ch = getchar()) != '\n') ----����Ҫ�Ĳ���
////	{
////		;
////	}
//	printf("��ȷ������(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y') 
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}





////int main() {
//
//	int i = 0;
//getchar--ȡ�ַ�����i��
//	while ((i = getchar()) != EOF)
//	putchar�Ǵ�ӡi���ַ�
// ��Ctrl+z��������
// EOF
// 
// 	putchar(i);
//
//
//}
//
//

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//
//
//		printf("%d\n",i);
//		i++;
//	}
//
//	return 0;
//}




//int main() {
//	int n = 1;
//	int m = 2;
//	switch (n) {------Switch������Ƕ��
//	case 1:m++;
//	case 2:n++;
//	case 3:switch (n) {----n=2��ִ��case2����ִ��case1
//	case 1:n++;
//	case 2:m++; n++;
//		break;
//
//	}
//	case 4:m++;
//		break;
//	default:break;
//	}
//	printf("m=%d\n n=%d\n", m, n);
//	return 0;
//}








//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default://---------��ʾ����������ֲ��ԣ���caseû��˳��֮��
//		printf("�������");
//		break;
//	}
//	return 0;
//}


//int main() 
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)----()��ֻ�ܷ�����
//	{
//	case 1:------case��ֻ�ܷ����γ������ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n"); 
//		break;
//	case 3:
//		printf("������\n"); 
//		break;
//	case 4:
//		printf("������\n"); 
//		break;
//	case 5:
//		printf("������\n"); 
//		break;
//	case 6:
//		printf("������\n"); 
//		break;
//	case 7:
//		printf("������\n"); 
//		break;
//	}
//	return 0;
//}





//��ӡ100���ڵ�����
//int main() 
//{
//	int i = 1;
//	while (i <= 100) {
//		
//		printf("%d\n", i);
//		i = i + 2;
//	}
//
//	/*int i = 0;
//       
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		
//			i++;
//		
//	}*/
//
//	return 0;
//}


//int main() {
//
//	int num = 4;
//	if (5 == num)	=��ʾ��ֵ  ==��ʾ�ж����
//		printf("hehe\n");
//
//	else 
//		printf("haha");
//	return 0;
//}


//int main() 
//{
//	int a = 0;
//	int b = 4;
//	if (a == 0)
//	{
//		if (b == 2)
//			printf("hehe\n");//else�����������ifƥ��
//		else if (b ==3)
//			printf("%d\n", a);
//		else if (b == 4)
//			printf("%d\n", b);
//	}
//	else
//		printf("haha\n");
//
//	return 0;
//}



//int main() {
//if���ʹ��
//	int age = 100;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���");
//
//
//	return 0;
//}
//struct Book 
//{   char name[20];
//	short price;
//};//-------  ;����ʡ��
////.	�ṹ�����.��Ա
// //->�ṹ��ָ��->��Ա
//int main() {
//	struct Book b1 = { "C���Գ��򿪷�", 55 };
//	strcpy(b1.name, "C++");//����ı�����һ����ַ
//// strcpy(λ�ã� "Ҫ�ĵ�����")--�⺯��������Ҫ��#include<string.h>
//	struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	printf("������%s\n", b1.name);
//	printf("�۸�=%d\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�=%d\n",b1.price);
//	return 0;
//}
//




//int main() 
//{
//	char ch = 'w';
//	 char* p = &ch;-----ָ��ǰ�ı���Ҫ��ǰ���ͳһ
//	 *p = 'a';
//	printf("%d\n", sizeof(p));
//
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//	int* p = &a;/*----�����洢��ַ�ı�����ָ�����*/
//	*p = 25;---��仰����˼�ǰ�a������10��Ϊ25		
// *�ǽ����ò�����
//	printf("%d\n", a);
//ָ���С32λ��4���ֽڣ�64λ����8���ֽ�
//
//	printf("%p\n", p);/*%p�Ǵ�ӡ��ַ��-----int*   */
//	printf("%p\n", &a);
//	return 0;
//}




//#define MAX(X,Y)(X>Y?X:Y)---------------����
//int Max(int x, int y) {
//
//	if (x > y)
//		return x;-----------������
//	else
//		return y;
//}
//int main() 
//{//�����Ķ��巽ʽ
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf( "max=%d\n", max);
//	//��Ķ��巽ʽ
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//
//}











 /*extern int Add(int, int);
int main() 
{   int a = 10;
	int  b = 20;
	int sum=Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}*/



//int main() {
//
//	extern int gval;		/*static���ξֲ�����---�������ڱ䳤*/
//	printf("gval=%d\n", gval);/*static����ȫ�ֱ���---��������*/
//	return 0;				   /*--ֻ���ڱ������ڵ�Դ�ļ���ʹ��*/
//							static���κ���ʱ������ȫ�ֱ�������
//							��ֻ�������ڵ�Դ�ļ���ʹ��	
//}
//
////void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//
//}
//int main() {
//	int i = 0;
//	
//	while (i<5)
//	{
//		test();
//		i++;
//
//		}
//	
//	return 0;
//}


//int main() {
//
//
//	int a = 0;		��---0
//	int b = 6;		��---����
//	int c = a && b;  &&--�߼���--һ��Ϊ��ȫ�Ǽ�
//	printf("%d\n", c);||�߼���--һ��Ϊ��ȫ����
//	return 0;
//}



//int main()
//{
//	int a = 10;     ++a����++����ʹ��  a++����ʹ�ã���++
//	int b = ++a;	--a����--����ʹ��  a--����ʹ�ã���--	
//	printf("a=%d\n,b=%d\n", a, b);
//
//	return 0;
//
//}
////int main() {
//
//	int a = 0;
//	//00000000000000000000000000000000
//	//ȡ��11111111111111111111111111111111
//	//��һ11111111111111111111111111111110��Ϊ����
//	//ȡ��0000000000000000000000000000001
//		int b = ~a;
//		printf("%d\n", b);//~�ǰ�������λȥ��
////%d�������ԭ��  ԭ��=����ȡ��  ����=�����һ
// ���е������洢���ǲ���
// ������ԭ�룬���룬����һ��
//		//�������ڴ����Է������ʽ�洢
//	return 0;
//}


//int MAX(int x, int y)
//{
//	
//	if (x < y)
//		return x;
//	else
//		return y;
//
//
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//
//
//
//}

//int main() {
//
//
//	int num1 = 150;
//	int num2 = 100;
//	if (num1 < num2)
//		printf("��Сֵ=%d\n", num1);
//	else
//		printf("��Сֵ=%d\n",num2);
//	return 0;
//}
//

//int main() {
//	int size = 0;
//	int arr[10] = { 0 };
//	size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sizeof(arr));
//	printf("size=%d", size);
//
//
//	return 0;
//}

//int main() {
//
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//
//
//	return 0;
//}
//


//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};����Ķ��巽ʽ
//	int i = 0;
//	while (i < 10) 
//	{
//		printf("%d ", arr[i]);ѭ��
//		i++;��1
//
//}
//
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	int z = x + y; �Զ��庯�����⺯��
//		return z;
//}
//int main() {
//	
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	sum= Add(a, b);
//	
//	printf("sum=%d\n", sum);
//
//
//	return 0;
//}


//int main() {
//	printf("��һ���ô�ѧ\n");
//	int line = 0;
//		while(line<200)
//		{
//			
//			printf("��һ�д���:%d\n",line);
//			line++;
//
//		}
//		if("line>=200")
//		printf("һ���ù���\n");
//	return 0;
//
//
//}

//int main()
//{
//	int input = 0;
//    printf("��һ���ô�ѧ\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)//û;û;
//	printf("��һ���ù���\n");
//	else
//		printf("������\n");
//
//		return 0;
//}





//int main() {
//
//	printf("hello world\n");
//
//	printf("%c\n", '\64');
//	return 0;
//}

//
//#include<string.h>
//int main()
//{
//
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}
//
//
//
//
//
//%d��ӡ����
// %s��ӡ�ַ���
// %c��ӡһ���ַ�
//%f��ӡС��
// 
// int ����
// short int ������
// long ������
// long long ����������
// float �����ȸ����͡���С��������ʱ��Ĭ��double�������ֺ����f����
// double  ˫���ȸ����͡���С��
// 
// 
// 
//int main() 
//{
//	printf("c\\test\\code\\test_12_3");
//	//"\"��ת�Ʒ��ţ�������������ȡ��ת��
//
//
//	return 0;
//}

//#include<string.h>
//int main() 
//{
//
//	char arr1[] = "abc";//a b c /0--->�ַ���������־
//	char arr2[] = { 'a', 'b', 'c', 0};//a b cû��/0����Dev�Զ�����/0
//	printf("%d/n", strlen(arr1));
//	printf("%d/n", strlen(arr2));
//	return 0;
//}
//
//
//enum COLOR{
//	red,
//yellow,
//blue
//
//};
//int main() {
//
//	enum COLOR color = yellow;
//	printf("%d/n", red);
//	printf("%d", yellow);
//	printf("%d", blue);
//
//	return 0;

//#define MAX 100
//int main()
//{
//	const int n = 50;
//	
//	printf("%d",n);
//	return 0;
//}
//

//int main()
//{
//	printf("%d", sizeof(char));
//	printf("%d", sizeof(short));
//	printf("%d", sizeof(int));
//	printf("%d", sizeof(long));
//	printf("%d", sizeof(long long));
//	printf("%d", sizeof(float));
//	printf("%d", sizeof(double));
//
//	return 0;
//}
//

//int main()
//{
//	float f = 6.3;
//	printf("%f", f);
//
//	return 0;
//}
//int main()
//{
//
//	char ch = 'H';
//	printf("%c", ch);
//	return 0;
//
//}

//int main()
//{
//	short age = 19;
//	printf("%d", age);
//	return 0;
//}

//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//		int sum = 0;
//		scanf("%d%d", &num1, &num2);
//		sum = num1 + num2;
//		printf("sum=%d", sum);
//
//	return 0;
//}

//int globle = 2022;
//void test() 
//{
//	printf("test()--%d/n", globle);
//}
//
//int main()
//{
//	test();
//
//	printf("%d/n", globle);
//	
//	return 0;
//}