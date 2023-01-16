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
//s1 s2也是结构体变量
//s1 s2是全局变量
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
	struct Stu s = { {3.14,50} ,"张三",20,"202222020123"};
	////s是局部变量
	print1(s);
	print2(&s);
	//print2好，节省内存
	//函数传参时需要压栈
	 //先进的后出，后进的先出


	/*printf("%lf\n",s.sb .a );
	printf("%s\n", s.name);
	struct Stu* ps = &s;
	printf("%lf\n", (*ps).sb.a  );
	printf("%lf\n", ps->sb.a);*/
	return 0;
}
//int main()
//{
//	//整形指针数组
//	int* parr[10];
//	//字符指针数组
//	char* pac[10];
//
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//二级指针
//	int** ppa = &pa;
//	//二级指针解引用
//	**ppa;
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	//[]是操作符，2，arr是操作数
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
//	//数组名是数组首元素的地址
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//
//	return 0;
////3.指针-指针方法
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
//2.递归
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
//1.迭代--循环
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
//	//指针-指针=两指针间的元素个数
//	//前提是两指针指向的空间相同
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
////不知道p是什么地址是初始化NULL
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

