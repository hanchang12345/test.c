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
//	//����λ�ÿ���ʱҪ����\�����ε�ַ�Դ���"\"
//	   //wģʽ�����ļ����ļ�������ݻ��Զ����
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�����ƴ�ӡ----������fwrite�Ķ�ȡ
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
//     //����λ�ÿ���ʱҪ����\�����ε�ַ�Դ���"\"
//		//wģʽ�����ļ����ļ�������ݻ��Զ����
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//������д�ļ�---�����ַ�������ȫ��������
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
//     //����λ�ÿ���ʱҪ����\�����ε�ַ�Դ���"\"
//		//wģʽ�����ļ����ļ�������ݻ��Զ����
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
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
//     //����λ�ÿ���ʱҪ����\�����ε�ַ�Դ���"\"
//		//wģʽ�����ļ����ļ�������ݻ��Զ����
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fscanf(pf, "%s %d %f", s.arr, &(s.a),&(s.b));
//
//	//��ӡ
//	printf("%s %d %f", s.arr, s.a, s.b);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//} 

//���������г����豸ʱ�������ȵ��������ڷ��䵽�豸
//����ʼʱĬ�Ͽ���������
//stdin---��׼������
//stdout---��׼�����
//stderr---��׼������

//int main()
//{
//	char arr[10] = "xxxxxxxx";
//     //����λ�ÿ���ʱҪ����\�����ε�ַ�Դ���"\"
//		//wģʽ�����ļ����ļ�������ݻ��Զ����
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//n�Ƿ��ʼ����ַ�������\0, ʵ�ʴ�ӡ4���ַ�
//	fgets(arr,5,pf);//���������������
//	printf("%s\n", arr);
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ı��ķ�ʽд��--ASCIIֵ�ķ�ʽд��ȥ��
//int main()
//{
//     //����λ�ÿ���ʱҪ����\�����ε�ַ�Դ���"\"
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdef\n", stdout);
//	fputs("qwertyuiop\n", stdout);
//
//	//����һ���ַ������ỻ��
//	//fputs("abcdef\n", pf);//���������������
//	//fputs("qwertyuiop\n", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//     //����λ�ÿ���ʱҪ����\�����ε�ַ�Դ���"\"
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//fgetc������ȡһ���ַ��������Զ�����һ������û��ʱ����EOF
//	//���ص����ַ���ASCIIֵ
//	int ret = fgetc(stdin);//���������������
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
//     //����λ�ÿ���ʱҪ����\�����ε�ַ�Դ���"\"
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
// //д�ļ�
//	int ret = fputc('b', stdout);//�ļ�����һ���ַ�
//	//printf("%c\n", ret);
//	ret = fputc('i', stdout);//���������������
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
//     //����λ�ÿ���ʱҪ����\�����ε�ַ�Դ���"\"
//		//wģʽ�����ļ����ļ�������ݻ��Զ����
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