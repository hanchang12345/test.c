#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct S
{
	double a;
	short c;
};
struct Stu
{
	struct S sb;
	char name[20];
	int age;
	char id[20];
}s1, s2;
//s1 s2Ҳ�ǽṹ�����
//s1 s2��ȫ�ֱ���
// .->
void print1(struct Stu t)
{
	printf("%lf %d %s %d %s\n", t.sb.a, t.sb.c, t.name, t.age, t.id);
}
void print2(struct Stu* ps)
{
	printf("%lf %d %s %d %s\n", ps->sb.a, ps->sb.c, ps->name, ps->age, ps->id);

}
int main()
{
	struct Stu s = { {3.14,50} ,"����",20,"202222020123"};
	////s�Ǿֲ�����
	print1(s);
	print2(&s);
	//print2�ã���ʡ�ڴ�
	//��������ʱ��Ҫѹջ
	 //�Ƚ��ĺ����������ȳ�


	/*printf("%lf\n",s.sb .a );
	printf("%s\n", s.name);
	struct Stu* ps = &s;
	printf("%lf\n", (*ps).sb.a  );
	printf("%lf\n", ps->sb.a);*/
	return 0;
}
//int main()
//{
//	//����ָ������
//	int* parr[10];
//	//�ַ�ָ������
//	char* pac[10];
//
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//����ָ��
//	int** ppa = &pa;
//	//����ָ�������
//	**ppa;
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	//[]�ǲ�������2��arr�ǲ�����
//	//arr[2]=*(p+2)=*(2+p)=*(2+arr)=*(arr+2)=2[arr]
//	printf("%d\n", arr[2]);
//	printf("%d\n", 2[arr]);
//	printf("%d\n", p[2]);
//	printf("%d\n", 2[p]);
//
//	//arr[2]-->*(arr+2)-->*(2+arr)-->2[arr]
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//		//printf("%p<==>%p\n", &arr[i], p + i);
//		*(p + i)=i+1;
//		printf("%d ", arr[i]);
//
//	}
//	//��������������Ԫ�صĵ�ַ
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//
//	return 0;
////3.ָ��-ָ�뷽��
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
// 
//2.�ݹ�
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//	{
//		str++;
//		return 1 + my_strlen(str);
//	}
//}
//1.����--ѭ��
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//
////}
//int main()
//{
//
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}
// 
// 
// 
// 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[10];
//	//ָ��-ָ��=��ָ����Ԫ�ظ���
//	//ǰ������ָ��ָ��Ŀռ���ͬ
//	printf("%d\n", &arr[9] - &ch[5]);//err
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		if (*p == 5)
//		{
//			printf("-----------\n");
//		}
//		if (*p == 6)
//		{
//			printf("------------\n");
//		}
//		printf("%d\n", *p);
//			p++;
//	}
//
//	return 0;
//}

//int main()
//{
////��֪��p��ʲô��ַ�ǳ�ʼ��NULL
//	int* p = NULL;
//	if(*p!=NULL)  
//	  *p = 10;
//	printf("%d\n", *p);
//
//	//int a = 0;
//	//int* p = &a;
//	//*p = 10;
//	//printf("%d\n", a);
//	return 0;
//}

