#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<math.h>


//
////程序只有一个main函数>
//int main()
//{
//	printf("hehe\n");
//	printf("haha\n");
//	return 0;
//}
//
//

//数据类型
//整形 int short long    long long
//字符类型 char
//浮点型 double（双精度） float（单精度）

//各个类型的大小
//int main()
//{
//	printf("char 的大小为：%d\n", sizeof(char));// 1
//	printf("int 的大小为：%d\n", sizeof(int));// 4 
//	printf("short 的大小为：%d\n", sizeof(short));// 2
//	printf("long 的大小为：%d\n", sizeof(long));// 4 
//	printf("long long  的大小为：%d\n", sizeof(long long));// 8 
//	printf("double 的大小为：%d\n", sizeof(double));// 8
//	printf("float 的大小为：%d\n", sizeof(float));// 4
//	return 0;
//}

//常量和变量
//常量：1，字面常量 直接打出来 2，#define定义的常量 3，const修饰的常变量 4，枚举常量
//变量：变量类型 变量名 = 赋值;
//变量分为局部变量（大括号内的）和全局变量（大括号外的）
//全部变量和局部变量名字相同的话 局部变量优先

//int main()
//{
//	int age = 10;
//	double weight = 150.15;
//	age++;
//	weight = weight - 15;
//	printf("age =%d\n", age);
//	printf("weight = %lf\n", weight);
//	return 0;
//
//}


//求两个整数的和
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("a+b=%d\n", a + b);
//	return 0;
//
//}

//作用域：局部变量的作用域是自身所在的局部范围，全局变量的作用域是整个项目
//int g_val = 100;
//int main()
//{
//	printf("g_val=%d\n", g_val);
//
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//		printf("g_val=%d\n", g_val);
//	}
//	printf("g_val=%d\n", g_val); 
//	return 0;
//}
//

//enum Sex
//{
//	MALE = 5,//赋初值
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	// MALE = 10;ERR
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//字符串
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = { 'h','e','l','l','o'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	int len1 = strlen(arr1);//3 字符串以\0结束但是不计入长度
//	int len2 = strlen(arr2);//随机数
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	return 0;
//}
//

//转义字符
//\0 字符串结束 \t 水平制表符 \a 声音 \n 换行 
// \ddd d代表的是8进制数字 
// \xdd d代表的是两个16进制数字

//函数  返回值 函数名(函数形参)
//数组传函数是传的是首元素地址 
//数组的下标从0开始

//操作符：+ - * / %（必须为整数）+= -= *= /= ^= &= |= ……
// <<左移操作符（二进制，补0）>>右移操作符
//位操作符：& | ^
//单目操作符 ++ -- ！== sizeof() + -
//0为假，非0为真
// ~按位取反
//原码，反码，补码
//内存存的是补码
//正数的原反补相同
//原码（符号位不变，其他位按位取反）->反码（减一）->补码


//int main()
//{
//	int a = 10;
//	if (a)
//	{
//		printf("a不是0\n");
//	}
//	if(!a)
//	{
//		printf("a是0\n");
//	}
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//不是函数，计算类型的大小单位是字节
//	printf("%d\n", ~a);
//	return 0;
//}

//关键字：
//auto 自动的，自己销毁，局部变量都有auto隐藏了
//entern 声明外部符号
//regedit 建议把变量放在寄存区
//signed 有符号的 unsigned无符号的
 //staic 静止的，修饰的变量放在静态区
//void 无空 enum枚举 union联合体

//预处理指令 define include

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//static 修饰全局变量，使得全局变量只能在自己的源文件内使用，改变了它的外部链接属性
//static 修饰函数，使得函数只能在自己的源文件内使用，改变了它的外部链接属性
//static 修饰局部变量，改变了变量的类型

//#define ADD(x,y) ((x)+(y))
//
//
//int main()
//{
//	printf("%lf\n",4*ADD(5.5, 5.5));
//	return 0;
//}

//内存的最小单位是字节，指针的大小是4个字节（32）或8个字节（64）
//指针的形式是 指针类型 指针名 = &取得变量名
//结构体类型：创建类型
//
//struct Stu {
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct Stu s = { "zhangsan",20,85.5 };
//	printf("name = %s  age = %d score = %lf\n", s.name, s.age, s.score);
//	struct Stu* ps = &s;
//	printf("name = %s  age = %d score = %lf\n",(*ps).name, (*ps).age, (*ps).score);
//	printf("name = %s  age = %d score = %lf\n", ps->name,ps->age,ps->score);
//	//结构体指针->成员变量
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else 
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("max = %d\n", m);
//	return 0;
//}

//选择语句
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age <= 18)
//		printf("不是成年\n");
//	else if (age > 18 && age <= 28)
//		printf("是青年\n");
//	else if (age > 28 && age <= 38)
//		printf("是青壮年\n");
//	else if (age > 38 && age <= 50)
//		printf("是壮年\n");
//	else 
//		printf("是老年\n");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

//case 整形常量表达式
//多个case可以垒在一起
//break continue只是跳出当前的循环
//break跳过整个循环（循环结束），continue跳出本次循环（循环未结束）

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
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
//		printf("星期七\n");
//		break;
//	default:
//		printf("error\n");
//		break;
//	}
//	return 0;
//}
//
//

//EOF 文件结束标志 -1 键盘输入ctrl+Z在终端
//getchar putchar只打印一个字符
//getchar函数会认为\n也是字符

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		int i = putchar(ch);
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>\n");
//	scanf("%s",password);
//	printf("请判断密码：Y/N\n");
//	//清理缓存区
//	/*getchar();*/
//
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n' && tmp != EOF)
//	{
//		;
//	}
//
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("登录成功\n");
//	}
//	else
//	{
//		printf("登录失败\n");
//	}
//
//	return 0;
//}


//不可在for循环内改变循环变量，以免导致失控
//建议使用前闭后开的写法
//判断语句省略--》死循环

//int main()
//{
//	int i = 0;
//	int k = 0;
//	//这里是把0赋给了k，这个表达式的值是0，0为假，循环一次都不执行
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		//printf("hehe\n");
//		k++;
//	}
//	return 0;
//}
//
// 特点是至少循环一次
//do
// {
//	循环语句
// }while(判断条件);
//int main()
//{
//	int i = 1;
//	do {
//		if (i == 5) {
//			//break;//1 2 3 4
//			continue;//1 2 3 4 死循环
//		}
//
//		printf("%d ", i);
//		i++;
//	} while (i<10);
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 3;
//	int ret = 1;
//	//scanf("%d", &n);
//	int j = 0;
//	int sum = 0;
//	//for (j = 1; j <= n; j++)
//	//{
//	//	ret = 1;
//	//	for (i = 1; i <= j; i++)
//	//	{
//	//		ret = ret * i;
//	//	}
//	//	sum = sum + ret;
//	//}
//
//	//计算1到3的阶乘和
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//	printf("n的阶乘和%d\n", sum);
//	return 0;
//}

//在有序数组里查找，二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left<=right)
//	{
//
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	} 
//
//
//	return 0;
//}


//
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}




//密码案例：

//int Isperson()
//{
//	int i = 0;
//	system("cls");
//	printf("请按照以下要求进行操作\n");
//	printf("请验证是否为真人:>\n");
//	printf("请输入以下数字\n");
//	int ret = rand();
//	printf("%d\n", ret);
//	scanf("%d", &i);
//	if (i == ret)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int cheek(char* change,int sz)
//{
//	int i = 0;
//	while (i<sz)
//	{
//		if (*change >= 'a'&&*change <= 'z')
//		{
//			change++;
//		}
//		else if (*change >= '0' && *change <= '9')
//		{
//			change++;
//		}
//		else
//			break;
//		i++;
//	}
//	if (i < sz)
//		return 0;
//	else 
//		return 1;
//	
//}
//
//
//int main()
//{
//	char change[20] = { 0 };
//	srand((unsigned)time(NULL));
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>\n");
//		scanf("%s", password);
//		if ((strcmp(password, "123456")) == 0)
//		{
//			printf("登录成功!\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入!!!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，请重新设置密码!!!\n");
//		//人机识别
//		int j = Isperson();
//		if (j == 0)
//		{
//			printf("账户冻结，请明天再试!\n");
//		}
//		else
//		{
//			printf("请输入新密码\n");
//			printf("新密码的要求为：只有数字和小写字母组成且不能超过15个字符\n");
//			scanf("%s",change);
//			int sz = strlen(change);//han123 6
//			int ret = cheek(change,sz);
//			if (ret == 1)
//			{
//				printf("密码修改成功\n");
//			}
//			else
//			{
//				printf("密码修改失败\n");
//			}
//		}
//	}
//	return 0;
//}


//猜数字
//void menu()
//{
//	printf("**************************\n");
//	printf("****     1. play      ****\n"); 
//	printf("****     0. exit      ****\n");
//	printf("**************************\n");
//}
//
//void game()
//{
//	//1.生成随机数
//
//	int ret = rand() % 100;
//	//printf("%d\n", ret);
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入一个数字:>");
//		scanf("%d", &guess);
//		//3.比较大小
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了，答案是：%d\n", ret);
//			break;
//		}
//
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//
//		}
//	} while (input);
//
//
//
//	return 0;
//}
//

//辗转相除法

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (t=m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", n);
//  最小公倍数=m*n/最大公约数；
// 	return 0;
//}

//
//int main()
//{
//	int m = 0; 
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = m>n?m:n;
//	while (1)
//	{
//		if (max % m == 0 && max % n == 0)
//		{
//			printf("最小公倍数是：%d\n", max);
//			break;
//		}
//		max++;
//	}
//
//	return 0;
//}

//素数
//只能被1和它本身整除
//从2到i-1试

//
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//
//		int flag = 1;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		//if (i == j)
//		//{
//		//	printf("%d ", i);
//		//	count++;
//		//}
//		//
//
//		if (flag==1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("你的电脑将在1分钟之内关机，请输入：'我是猪'取消关机:>");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//

//函数的实参可以是变量，常量，表达式，函数等，但是必须能算出精确值
//函数的形参会自动销毁，形参的改变不会影响实参

//交换两个数的值
//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
// 
// 
// 
//int is_leap_year(int y)
//{
//	//if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//	//{
//	//	return 1;
//	//}
//	//else
//	//	return 0;
//
//	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
//}
//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//二分查找
//int binary_search(int* arr, int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 7;
//	
//
//	//返回下标，否则返回-1
//	int ret = binary_search(arr,key,sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d\n", ret);
//
//	return 0;
//}

//函数的嵌套调用和链式访问
//函数不可以嵌套定义
//导入静态库： #pragma comment(lib,"sub.lib")

//函数的嵌套：函数自己调用自己
//以大化小的思想
// 
//int main()
//{
//	printf("呵呵\n");
//	main();// 死循环error
//	return 0;
//}



//void print(unsigned int n)
//{
//	//函数使用完成后会返回调用的位置
//	//函数递归的两个条件
//	//1.函数递归必须有限制条件，满足条件后结束递归
//	//2.每次递归后越来越接近这个限制条件
//	//3.递归的层次不能太深，会出现栈溢出的情况
//
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//编写strlen函数，不允许创建临时变量
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bite";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//斐波那契数列
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//调整n的大小，避免死循环
//	}
//	return c;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fib(num);
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//循环的方式
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left<right)
//	{
//		char tmp = 0;
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//
//
//}

//递归的方式
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//fedcba
//	return 0;
//}


//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//
//}


//int DigitSum(int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//		return num;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//
//	return 0;
//}

//数组：
//不完全初始化会把剩下的位置补0
//一维数组的定义：变量类型 数组名[常量表达式];
//一维数组是连续存放的
//随着下标的增加地址由低到高变化
//二维数组的行可以省略但是列不可以省略
//二维数组的行和列都是从0开始的

//二维数组的定义方式：变量类型 数组名[常量表达式1][常量表达式2]

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)++);
//		/*p++;*/
//	}
//	return 0;
//
//}

//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int* p = &arr[0][0];
//	int i = 0;
//	/*for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//冒泡排序
//void bubble_sort(int* arr, int sz)
//{
//	int j = 0;
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//
//	int i = 0 ;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}
//

//数组名是首元素的地址，但是有特殊情况
//1.sizeof(数组名)，表示的是整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名 - 表示的是整个数组，取出的是整个数组的地址，值和数组名一样，但是步长不一样
//
//int main()
//{
//	int arr[10] = { 0 };
//	//int sz = sizeof(arr);
//	//printf("%d ", sz);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	
//	return 0;
//}0
//







