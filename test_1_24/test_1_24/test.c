#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//int main()
//{
//	int(*parr[4])(int, int);
//	//指向函数指针数组的指针
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
////函数的回调--通过函数地址来调用函数
//void Calc(int(*pf)(int x, int y))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>\n");
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
//		printf("请选择:>");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
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
//	// 函数指针数组-----转移表
//	int(*parr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	int sz = sizeof(parr) / sizeof(parr[0]);
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input>=1&&input<=sz)
//		{
//			printf("请输入两个操作数:>\n");
//			scanf("%d%d", &x, &y);
//			ret = parr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{case 1:
//			printf("请输入两个操作数:>");
//		    scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 5:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Xor(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
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
// //函数指针数组
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
//将0强制类型转换成函数指针--0就是函数的地址
//该函数指针无参数，返回类型是void
//然后调用0所指向的函数

//void(*(signal(int, void(*)(int))))(int);
//意思是signal函数的声明
//signal有两个参数，第一个是int，第二个是函数指针
//第二个人函数指针的返回类型是void，参数是int
//signal的返回类型是函数指针
//该指针的返回类型是void，参数是int

//简化
//typedef void(*p_fun)(int);
//p_fun signal(int, p_fun);
//typedef void(*重新起的名)(int);
//typedef unsigned int uint--重新起的名;


//函数指针---存函数的地址
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
//	//&函数名和函数名一样
// 
//  //返回类型(*名字--表示是指针)(函数形参的类型)=函数名
// 
//	int(*p)(int, int) = Add;
//	//p和Add一样
//	printf("%d\n", (*p)(2, 3));
//	printf("%d\n", p(2, 3));
//
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	return 0;
//}


//二级指针传参
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
//一级指针传参
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


//一维数组传参
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

//二维数组传参
// 
//void test(int arr[3][5])
//{}
//void test(int arr[3][])//err
//{} //err
// 接收二维数组时行可以省，列不能省
//void test(int(*p)[5])//OK
//{}
//void test(int *arr[5])//err
//{}
//void test(int** arr)//err
//{}
//int main()
// {
//	int arr[3][5] = { 0 };
//	//里面是3个数组，创建函数时要用数组指针接收
//	test(arr);
//
//
//	return 0;
//}