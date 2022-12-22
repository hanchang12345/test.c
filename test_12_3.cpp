#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	do {
//		
//		if (i == 5)
//		continue;---跳过此次循环，调整不了，死循环了
//		printf("%d\n", i);
//		i++;
//
//	} while (i<=10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;//--没有判断语句，只有赋值，k=0为假，不循环
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
// 10 次循环
// 10 次打印
// 10 个元素
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//	return 0;
//}


//for while中的break continue都是一个作用
// break跳过循环
// continue跳过本次循环-----for不会死循环 while可能会死循环
// for循环建议使用前闭后开式写法
// for循环不要在循环体内部改变变量，容易导致bug
// for循环的初始化，调整，判断都可以省略
// for循环判断省略的话代表判断恒为真
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
//	printf("请输入密码:>" );
//	scanf("%s", password);
////	while ((ch = getchar()) != '\n') ----最重要的部分
////	{
////		;
////	}
//	printf("请确认密码(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y') 
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}





////int main() {
//
//	int i = 0;
//getchar--取字符放在i中
//	while ((i = getchar()) != EOF)
//	putchar是打印i的字符
// 用Ctrl+z结束程序
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
//	switch (n) {------Switch语句可以嵌套
//	case 1:m++;
//	case 2:n++;
//	case 3:switch (n) {----n=2就执行case2，不执行case1
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://---------提示你输入的数字不对，和case没有顺序之分
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}


//int main() 
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)----()里只能放整形
//	{
//	case 1:------case后只能放整形常量表达式
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n"); 
//		break;
//	case 3:
//		printf("星期三\n"); 
//		break;
//	case 4:
//		printf("星期四\n"); 
//		break;
//	case 5:
//		printf("星期五\n"); 
//		break;
//	case 6:
//		printf("星期六\n"); 
//		break;
//	case 7:
//		printf("星期天\n"); 
//		break;
//	}
//	return 0;
//}





//打印100以内的奇数
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
//	if (5 == num)	=表示赋值  ==表示判断相等
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
//			printf("hehe\n");//else与离它最近的if匹配
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
//if语句使用
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死");
//
//
//	return 0;
//}
//struct Book 
//{   char name[20];
//	short price;
//};//-------  ;不能省略
////.	结构体变量.成员
// //->结构体指针->成员
//int main() {
//	struct Book b1 = { "C语言程序开发", 55 };
//	strcpy(b1.name, "C++");//数组的本质是一个地址
//// strcpy(位置， "要改的名字")--库函数，上面要加#include<string.h>
//	struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	printf("书名：%s\n", b1.name);
//	printf("价格=%d\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格=%d\n",b1.price);
//	return 0;
//}
//




//int main() 
//{
//	char ch = 'w';
//	 char* p = &ch;-----指针前的变量要与前面的统一
//	 *p = 'a';
//	printf("%d\n", sizeof(p));
//
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//	int* p = &a;/*----用来存储地址的变量叫指针变量*/
//	*p = 25;---这句话的意思是把a的数从10改为25		
// *是解引用操作符
//	printf("%d\n", a);
//指针大小32位是4个字节；64位的是8个字节
//
//	printf("%p\n", p);/*%p是打印地址的-----int*   */
//	printf("%p\n", &a);
//	return 0;
//}




//#define MAX(X,Y)(X>Y?X:Y)---------------》宏
//int Max(int x, int y) {
//
//	if (x > y)
//		return x;-----------》函数
//	else
//		return y;
//}
//int main() 
//{//函数的定义方式
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf( "max=%d\n", max);
//	//宏的定义方式
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
//	extern int gval;		/*static修饰局部变量---生命周期变长*/
//	printf("gval=%d\n", gval);/*static修饰全局变量---作用域变短*/
//	return 0;				   /*--只能在变量所在的源文件中使用*/
//							static修饰函数时与修饰全局变量相似
//							都只能在所在的源文件中使用	
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
//	int a = 0;		假---0
//	int b = 6;		真---非零
//	int c = a && b;  &&--逻辑与--一个为假全是假
//	printf("%d\n", c);||逻辑或--一个为真全是真
//	return 0;
//}



//int main()
//{
//	int a = 10;     ++a是先++，再使用  a++是先使用，再++
//	int b = ++a;	--a是先--，再使用  a--是先使用，再--	
//	printf("a=%d\n,b=%d\n", a, b);
//
//	return 0;
//
//}
////int main() {
//
//	int a = 0;
//	//00000000000000000000000000000000
//	//取反11111111111111111111111111111111
//	//减一11111111111111111111111111111110变为负数
//	//取反0000000000000000000000000000001
//		int b = ~a;
//		printf("%d\n", b);//~是按二进制位去反
////%d输出的是原码  原码=反码取反  反码=补码减一
// 所有的整数存储的是补码
// 正数的原码，补码，反码一致
//		//负数在内存中以反码的形式存储
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
//		printf("较小值=%d\n", num1);
//	else
//		printf("较小值=%d\n",num2);
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
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};数组的定义方式
//	int i = 0;
//	while (i < 10) 
//	{
//		printf("%d ", arr[i]);循环
//		i++;加1
//
//}
//
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	int z = x + y; 自定义函数；库函数
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
//	printf("上一个好大学\n");
//	int line = 0;
//		while(line<200)
//		{
//			
//			printf("敲一行代码:%d\n",line);
//			line++;
//
//		}
//		if("line>=200")
//		printf("一个好工作\n");
//	return 0;
//
//
//}

//int main()
//{
//	int input = 0;
//    printf("考一个好大学\n");
//	printf("你要好好学习吗？(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)//没;没;
//	printf("有一个好工作\n");
//	else
//		printf("卖红薯\n");
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
//%d打印整数
// %s打印字符串
// %c打印一个字符
//%f打印小数
// 
// int 整形
// short int 短整型
// long 长整形
// long long 更长的整形
// float 单精度浮点型——小数——有时会默认double，在数字后面加f就行
// double  双精度浮点型——小数
// 
// 
// 
//int main() 
//{
//	printf("c\\test\\code\\test_12_3");
//	//"\"是转移符号，可以用两个来取消转义
//
//
//	return 0;
//}

//#include<string.h>
//int main() 
//{
//
//	char arr1[] = "abc";//a b c /0--->字符串结束标志
//	char arr2[] = { 'a', 'b', 'c', 0};//a b c没有/0但是Dev自动加上/0
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