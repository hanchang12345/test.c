#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<math.h>


//
////����ֻ��һ��main����>
//int main()
//{
//	printf("hehe\n");
//	printf("haha\n");
//	return 0;
//}
//
//

//��������
//���� int short long    long long
//�ַ����� char
//������ double��˫���ȣ� float�������ȣ�

//�������͵Ĵ�С
//int main()
//{
//	printf("char �Ĵ�СΪ��%d\n", sizeof(char));// 1
//	printf("int �Ĵ�СΪ��%d\n", sizeof(int));// 4 
//	printf("short �Ĵ�СΪ��%d\n", sizeof(short));// 2
//	printf("long �Ĵ�СΪ��%d\n", sizeof(long));// 4 
//	printf("long long  �Ĵ�СΪ��%d\n", sizeof(long long));// 8 
//	printf("double �Ĵ�СΪ��%d\n", sizeof(double));// 8
//	printf("float �Ĵ�СΪ��%d\n", sizeof(float));// 4
//	return 0;
//}

//�����ͱ���
//������1�����泣�� ֱ�Ӵ���� 2��#define����ĳ��� 3��const���εĳ����� 4��ö�ٳ���
//�������������� ������ = ��ֵ;
//������Ϊ�ֲ��������������ڵģ���ȫ�ֱ�������������ģ�
//ȫ�������;ֲ�����������ͬ�Ļ� �ֲ���������

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


//�����������ĺ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("a+b=%d\n", a + b);
//	return 0;
//
//}

//�����򣺾ֲ����������������������ڵľֲ���Χ��ȫ�ֱ�������������������Ŀ
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
//	MALE = 5,//����ֵ
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

//�ַ���
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = { 'h','e','l','l','o'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	int len1 = strlen(arr1);//3 �ַ�����\0�������ǲ����볤��
//	int len2 = strlen(arr2);//�����
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	return 0;
//}
//

//ת���ַ�
//\0 �ַ������� \t ˮƽ�Ʊ�� \a ���� \n ���� 
// \ddd d�������8�������� 
// \xdd d�����������16��������

//����  ����ֵ ������(�����β�)
//���鴫�����Ǵ�������Ԫ�ص�ַ 
//������±��0��ʼ

//��������+ - * / %������Ϊ������+= -= *= /= ^= &= |= ����
// <<���Ʋ������������ƣ���0��>>���Ʋ�����
//λ��������& | ^
//��Ŀ������ ++ -- ��== sizeof() + -
//0Ϊ�٣���0Ϊ��
// ~��λȡ��
//ԭ�룬���룬����
//�ڴ����ǲ���
//������ԭ������ͬ
//ԭ�루����λ���䣬����λ��λȡ����->���루��һ��->����


//int main()
//{
//	int a = 10;
//	if (a)
//	{
//		printf("a����0\n");
//	}
//	if(!a)
//	{
//		printf("a��0\n");
//	}
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//���Ǻ������������͵Ĵ�С��λ���ֽ�
//	printf("%d\n", ~a);
//	return 0;
//}

//�ؼ��֣�
//auto �Զ��ģ��Լ����٣��ֲ���������auto������
//entern �����ⲿ����
//regedit ����ѱ������ڼĴ���
//signed �з��ŵ� unsigned�޷��ŵ�
 //staic ��ֹ�ģ����εı������ھ�̬��
//void �޿� enumö�� union������

//Ԥ����ָ�� define include

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
//static ����ȫ�ֱ�����ʹ��ȫ�ֱ���ֻ�����Լ���Դ�ļ���ʹ�ã��ı��������ⲿ��������
//static ���κ�����ʹ�ú���ֻ�����Լ���Դ�ļ���ʹ�ã��ı��������ⲿ��������
//static ���ξֲ��������ı��˱���������

//#define ADD(x,y) ((x)+(y))
//
//
//int main()
//{
//	printf("%lf\n",4*ADD(5.5, 5.5));
//	return 0;
//}

//�ڴ����С��λ���ֽڣ�ָ��Ĵ�С��4���ֽڣ�32����8���ֽڣ�64��
//ָ�����ʽ�� ָ������ ָ���� = &ȡ�ñ�����
//�ṹ�����ͣ���������
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
//	//�ṹ��ָ��->��Ա����
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

//ѡ�����
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age <= 18)
//		printf("���ǳ���\n");
//	else if (age > 18 && age <= 28)
//		printf("������\n");
//	else if (age > 28 && age <= 38)
//		printf("����׳��\n");
//	else if (age > 38 && age <= 50)
//		printf("��׳��\n");
//	else 
//		printf("������\n");
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

//case ���γ������ʽ
//���case��������һ��
//break continueֻ��������ǰ��ѭ��
//break��������ѭ����ѭ����������continue��������ѭ����ѭ��δ������

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("error\n");
//		break;
//	}
//	return 0;
//}
//
//

//EOF �ļ�������־ -1 ��������ctrl+Z���ն�
//getchar putcharֻ��ӡһ���ַ�
//getchar��������Ϊ\nҲ���ַ�

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
//	printf("����������:>\n");
//	scanf("%s",password);
//	printf("���ж����룺Y/N\n");
//	//��������
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
//		printf("��¼�ɹ�\n");
//	}
//	else
//	{
//		printf("��¼ʧ��\n");
//	}
//
//	return 0;
//}


//������forѭ���ڸı�ѭ�����������⵼��ʧ��
//����ʹ��ǰ�պ󿪵�д��
//�ж����ʡ��--����ѭ��

//int main()
//{
//	int i = 0;
//	int k = 0;
//	//�����ǰ�0������k��������ʽ��ֵ��0��0Ϊ�٣�ѭ��һ�ζ���ִ��
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		//printf("hehe\n");
//		k++;
//	}
//	return 0;
//}
//
// �ص�������ѭ��һ��
//do
// {
//	ѭ�����
// }while(�ж�����);
//int main()
//{
//	int i = 1;
//	do {
//		if (i == 5) {
//			//break;//1 2 3 4
//			continue;//1 2 3 4 ��ѭ��
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
//	//����1��3�Ľ׳˺�
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//	printf("n�Ľ׳˺�%d\n", sum);
//	return 0;
//}

//��������������ң����ֲ���
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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




//���밸����

//int Isperson()
//{
//	int i = 0;
//	system("cls");
//	printf("�밴������Ҫ����в���\n");
//	printf("����֤�Ƿ�Ϊ����:>\n");
//	printf("��������������\n");
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
//		printf("����������:>\n");
//		scanf("%s", password);
//		if ((strcmp(password, "123456")) == 0)
//		{
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������!!!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���������������������������!!!\n");
//		//�˻�ʶ��
//		int j = Isperson();
//		if (j == 0)
//		{
//			printf("�˻����ᣬ����������!\n");
//		}
//		else
//		{
//			printf("������������\n");
//			printf("�������Ҫ��Ϊ��ֻ�����ֺ�Сд��ĸ����Ҳ��ܳ���15���ַ�\n");
//			scanf("%s",change);
//			int sz = strlen(change);//han123 6
//			int ret = cheek(change,sz);
//			if (ret == 1)
//			{
//				printf("�����޸ĳɹ�\n");
//			}
//			else
//			{
//				printf("�����޸�ʧ��\n");
//			}
//		}
//	}
//	return 0;
//}


//������
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
//	//1.���������
//
//	int ret = rand() % 100;
//	//printf("%d\n", ret);
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("������һ������:>");
//		scanf("%d", &guess);
//		//3.�Ƚϴ�С
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ����ǣ�%d\n", ret);
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
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

//շת�����

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
//	printf("���Լ����%d\n", n);
//  ��С������=m*n/���Լ����
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
//			printf("��С�������ǣ�%d\n", max);
//			break;
//		}
//		max++;
//	}
//
//	return 0;
//}

//����
//ֻ�ܱ�1������������
//��2��i-1��

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
//		printf("��ĵ��Խ���1����֮�ڹػ��������룺'������'ȡ���ػ�:>");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//

//������ʵ�ο����Ǳ��������������ʽ�������ȣ����Ǳ����������ȷֵ
//�������βλ��Զ����٣��βεĸı䲻��Ӱ��ʵ��

//������������ֵ
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
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
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

//���ֲ���
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
//	//�����±꣬���򷵻�-1
//	int ret = binary_search(arr,key,sz);
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����
//����������Ƕ�׶���
//���뾲̬�⣺ #pragma comment(lib,"sub.lib")

//������Ƕ�ף������Լ������Լ�
//�Դ�С��˼��
// 
//int main()
//{
//	printf("�Ǻ�\n");
//	main();// ��ѭ��error
//	return 0;
//}



//void print(unsigned int n)
//{
//	//����ʹ����ɺ�᷵�ص��õ�λ��
//	//�����ݹ����������
//	//1.�����ݹ������������������������������ݹ�
//	//2.ÿ�εݹ��Խ��Խ�ӽ������������
//	//3.�ݹ�Ĳ�β���̫������ջ��������
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

//��дstrlen����������������ʱ����
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

//쳲���������
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
//		n--;//����n�Ĵ�С��������ѭ��
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

//ѭ���ķ�ʽ
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

//�ݹ�ķ�ʽ
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

//���飺
//����ȫ��ʼ�����ʣ�µ�λ�ò�0
//һά����Ķ��壺�������� ������[�������ʽ];
//һά������������ŵ�
//�����±�����ӵ�ַ�ɵ͵��߱仯
//��ά������п���ʡ�Ե����в�����ʡ��
//��ά������к��ж��Ǵ�0��ʼ��

//��ά����Ķ��巽ʽ���������� ������[�������ʽ1][�������ʽ2]

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


//ð������
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

//����������Ԫ�صĵ�ַ���������������
//1.sizeof(������)����ʾ�����������飬���������������Ĵ�С����λ���ֽ�
//2.&������ - ��ʾ�����������飬ȡ��������������ĵ�ַ��ֵ��������һ�������ǲ�����һ��
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







