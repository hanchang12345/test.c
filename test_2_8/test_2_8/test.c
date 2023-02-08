#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//struct S
//{
//	char arr[10];
//	int a;
//	float b;
//
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	//绝对位置开启时要是用\来修饰地址自带的"\"
//	   //w模式开启文件，文件里的内容会自动清除
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制打印----用来对fwrite的读取
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.arr, s.a, s.b);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}





//struct S
//{
//	char arr[10];
//	int a;
//	float b;
//
//};
//
//
//int main()
//{
//	struct S s = { "hehe",10,5.5f };
//     //绝对位置开启时要是用\来修饰地址自带的"\"
//		//w模式开启文件，文件里的内容会自动清除
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制写文件---除了字符串以外全都看不懂
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// 




//struct S
//{
//	char arr[10];
//	int a;
//	float b;
//
//};
//
//
//int main()
//{
//	struct S s = { "hehe",10,5.5f };
//     //绝对位置开启时要是用\来修饰地址自带的"\"
//		//w模式开启文件，文件里的内容会自动清除
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fprintf(pf, "%s %d %f", s.arr, s.a, s.b);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// 


//struct S
//{
//	char arr[10];
//	int a;
//	float b;
//
//};
//int main()
//{
//	struct S s = { 0 };
//     //绝对位置开启时要是用\来修饰地址自带的"\"
//		//w模式开启文件，文件里的内容会自动清除
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fscanf(pf, "%s %d %f", s.arr, &(s.a),&(s.b));
//
//	//打印
//	printf("%s %d %f", s.arr, s.a, s.b);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//} 

//当我们运行程序到设备时，代码先到流，流在分配到设备
//程序开始时默认开启三个流
//stdin---标准输入流
//stdout---标准输出流
//stderr---标准错误流

//int main()
//{
//	char arr[10] = "xxxxxxxx";
//     //绝对位置开启时要是用\来修饰地址自带的"\"
//		//w模式开启文件，文件里的内容会自动清除
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//n是访问几个字符，包括\0, 实际打印4个字符
//	fgets(arr,5,pf);//适用于所有输出流
//	printf("%s\n", arr);
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文本的方式写进--ASCII值的方式写进去的
//int main()
//{
//     //绝对位置开启时要是用\来修饰地址自带的"\"
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdef\n", stdout);
//	fputs("qwertyuiop\n", stdout);
//
//	//输入一行字符，不会换行
//	//fputs("abcdef\n", pf);//适用于所有输出流
//	//fputs("qwertyuiop\n", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//     //绝对位置开启时要是用\来修饰地址自带的"\"
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	//fgetc函数读取一个字符，读完自动到下一个，当没有时返回EOF
//	//返回的是字符的ASCII值
//	int ret = fgetc(stdin);//适用于所有输出流
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//
//	/*int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);*/
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//     //绝对位置开启时要是用\来修饰地址自带的"\"
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
// //写文件
//	int ret = fputc('b', stdout);//文件输入一个字符
//	//printf("%c\n", ret);
//	ret = fputc('i', stdout);//适用于所有输出流
//	//printf("%c\n", ret);
//	ret = fputc('t', stdout);
//	//printf("%c\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//     //绝对位置开启时要是用\来修饰地址自带的"\"
//		//w模式开启文件，文件里的内容会自动清除
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	int arr[51] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > m)
//			arr[i + 1] = arr[i];
//		else
//		{
//			break;
//		}
//			
//	}
//
//		arr[i + 1] = m;
//	
//	for (i = 0; i < n+1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
// 
//	return 0;
//}