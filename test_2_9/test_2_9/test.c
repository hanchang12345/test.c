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
		//д�ļ�
		fputc(tmp, pfwrite);
	}
	if (feof(pfread))
		printf("�ļ���������\n");
	else
		printf("�ļ���ȡʧ��\n");
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;

	return 0;
}

//fgetc����������ȡʱ����ASCII��ֵ����ȡ����ʱ����EOF
//fgets����������ȡʱ���ش���ַ����ĵ�ַ����ȡ����ʱ����NULL
//fread����������ȡʱ����ʵ�ʶ�ȡ��������Ԫ�ظ���
//     ����Żص�ֵС��ָ����Ԫ�ظ�������������һ�ζ�ȡ
//feof�ж��ļ���ȡ������ԭ�򣬲�����Ϊ�ļ��������ж�

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
// //�ļ����abcdef
//	int ch = 0;
//	ch=fgetc(pf);
//	printf("%c\n", ch);//a
//	fseek(pf, 2, SEEK_CUR);
//	//�����ļ�ָ�뵽ָ��λ��
//
//	int ret = ftell(pf);//3
//	//������ָ���ƫ����
//	printf("%d\n", ret);
//	ch = fgetc(pf);//d
//	printf("%c\n", ch);
//	rewind(pf);
//	//���ļ�ָ��ص���ʼλ��
//	ch = fgetc(pf);//a
//	printf("%c\n", ch);
//	return 0;
//}

//sscanf--���ַ����ж�ȡ����--���ն�ȡ���������ʹ�ӡ
//sprintf--������ת�����ַ���---�����ַ����ķ�ʽ��ӡ

//struct S
//{
//	char arr[10];
//	int a;
//	float b;
//};
//int main()
//{
//	struct S s1 = { "hehe",10,5.5f };
//	//ת�����ַ���
//	char tmp[100] = { 0 };
//	sprintf(tmp,"%s %d %f", s1.arr ,s1.a ,s1.b );
//	//		Ҫ�Ž�ȥ��λ�� printf����ʽ
//	//���ַ����ķ�ʽ��ӡ
//	printf("%s\n", tmp);
//	//��tmp��ԭ�ɽṹ��
//	struct S s2 = { 0 };
//	sscanf(tmp,"%s %d %f",s2.arr ,&(s2.a), &(s2.b));
//	//		ԭ����λ�� ��scanf����ʽ��Ҫȡ��ַ
//	//�Խṹ��ķ�ʽ��ӡ
//	printf("%s %d %f", s2.arr, s2.a, s2.b);
//	return 0;
//}