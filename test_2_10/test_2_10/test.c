#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 


//条件编译--可以嵌套
//#define print 1
//int main()
//{
//	//如果定义了print，就执行
//#ifdef print
//	printf("hehe\n");
//#endif
//#if defined(print)
//	printf("hehe\n");
//#endif
//	//如果没定义print，就执行
//#ifndef print 
//	printf("haha\n");
//#endif
//#if !defined(print)
//		printf("haha\n");
//#endif
//	return 0;
//}

//int main()
//{
//	//1.
////#ifdef print
////	printf("hehe");
////#endif
//	//2.
////#if print//#if + 常量表达式
////	printf("hehe");
////#endif
//	//3.和if else if语句相似如果上面的有一个为真，那么后面语句不执行
////#if 1==1//常量表达式
////	printf("hehe\n");
////#elif 1==2
////	printf("haha\n");
////#else
////	printf("heihei\n");
////#endif
//	return 0;
//}

//编译->连接->生成可执行程序
//宏在预编译发生 但调试在可执行程序发生
//宏和函数的区别
//1.宏可以传类型（不够严谨），函数不行
//2.宏发生在预编译，无法调适，函数可以
//3.面对简单问题时，宏的效率比函数高（函数要调用和返回）
//4.宏会加长程序的长度，函数不会
//5.宏会有符号优先级的问题，函数没有
//

//宏的副作用
//#define P(X,Y) (X>Y?X:Y)
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int m = P(a++, b++);
//	//m=(a++）>(b++)?(a++):(b++)
//	// 10<20自增a=11,b=21
//	//m=b++
//	//a=11,m=21,b=22	printf("%d %d ", a, b);
//	printf("m=%d\n", m);
//
//	return 0;
//}
////##的作用--把两边的符号合并成一个--只能用在宏里
//#define P(X,Y) X##Y
//int main()
//{
//	int hanchang = 1000;
//	printf("%d\n", P(han,chang));
//	//	printf("%d\n", han##chang);
//	//	printf("%d\n", hanchang);		
//	return 0;
//}

////#的作用--只能在宏使用-把宏的参数插入到字符串里
//#define PEINT(X,FORM) printf("the value of "#X" is "FORM,X)
//int main()
//{
//	int a = 10;
//	PEINT(a, "%d\n");
//	//printf("the value of "#X" is "FORM, X)
//	//#X自动替换成传入的变量名a，FORM替换成"%d\n"
//
//	float f = 5.5;
//	PEINT(f, "%f\n");
//	//printf("the value of "#X" is "FORM, X)
//	//#X自动替换成传入的变量名f，FORM替换成"%f\n"
//	return 0;
//}


//#define name 想置换的数据---不要加;
//#define M(x) x*x//不严谨 输出7
//#define M(x) ((x)*(x))//宏严谨的写法//输出16
// 1.调用宏时，如果参数里有define定义的常量，先替换
// 2.然后替换到函数中去，对于宏，参数名被他们的值替换
// 3.检查，如果包含define定义的符号，重复以上动作
// //注意
// 1.宏参数中可以出现宏，但不能是他本身--不能递归
// 2.预处理器搜索define定义的符号时，字符串常量不会被搜索
// 
//int main()
//{
//
//	printf("%d\n", M(3));//传入3 然后计算
//	printf("%d\n", M(3 + 1));//3+1*3+1=7
//	//#define在预编译时完成替换，不会计算结果
//	return 0;
//}
