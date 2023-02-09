#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	FILE* pfread = fopen("test.txt", "r");
	if (pfread == NULL)
	{
		perror("pfread");
		return 1;
	}
	FILE* pfwrite = fopen("test2.txt", "w");
	if (pfwrite == NULL)
	{
		fclose(pfread);
		pfread = NULL;
		perror("pfwrite");
		return 1;
	}
	int tmp = 0;
	while ((tmp = fgetc(pfread)) != EOF)
	{
		//写文件
		fputc(tmp, pfwrite);
	}
	if (feof(pfread))
		printf("文件正常结束\n");
	else
		printf("文件读取失败\n");
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;

	return 0;
}

//fgetc函数正常读取时返回ASCII码值，读取结束时返回EOF
//fgets函数正常读取时返回存放字符串的地址，读取结束时返回NULL
//fread函数正常读取时返回实际读取的完整的元素个数
//     如果放回的值小于指定的元素个数，这就是最后一次读取
//feof判断文件读取结束的原因，不能作为文件结束的判断

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
// //文件里放abcdef
//	int ch = 0;
//	ch=fgetc(pf);
//	printf("%c\n", ch);//a
//	fseek(pf, 2, SEEK_CUR);
//	//调整文件指针到指定位置
//
//	int ret = ftell(pf);//3
//	//告诉你指针的偏移量
//	printf("%d\n", ret);
//	ch = fgetc(pf);//d
//	printf("%c\n", ch);
//	rewind(pf);
//	//让文件指针回到起始位置
//	ch = fgetc(pf);//a
//	printf("%c\n", ch);
//	return 0;
//}

//sscanf--从字符串中读取数据--按照读取的数据类型打印
//sprintf--把数据转换成字符串---按照字符串的方式打印

//struct S
//{
//	char arr[10];
//	int a;
//	float b;
//};
//int main()
//{
//	struct S s1 = { "hehe",10,5.5f };
//	//转换成字符串
//	char tmp[100] = { 0 };
//	sprintf(tmp,"%s %d %f", s1.arr ,s1.a ,s1.b );
//	//		要放进去的位置 printf的形式
//	//用字符串的方式打印
//	printf("%s\n", tmp);
//	//把tmp还原成结构体
//	struct S s2 = { 0 };
//	sscanf(tmp,"%s %d %f",s2.arr ,&(s2.a), &(s2.b));
//	//		原来的位置 ，scanf的形式，要取地址
//	//以结构体的方式打印
//	printf("%s %d %f", s2.arr, s2.a, s2.b);
//	return 0;
//}