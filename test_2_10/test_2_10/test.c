#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 


//��������--����Ƕ��
//#define print 1
//int main()
//{
//	//���������print����ִ��
//#ifdef print
//	printf("hehe\n");
//#endif
//#if defined(print)
//	printf("hehe\n");
//#endif
//	//���û����print����ִ��
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
////#if print//#if + �������ʽ
////	printf("hehe");
////#endif
//	//3.��if else if�����������������һ��Ϊ�棬��ô������䲻ִ��
////#if 1==1//�������ʽ
////	printf("hehe\n");
////#elif 1==2
////	printf("haha\n");
////#else
////	printf("heihei\n");
////#endif
//	return 0;
//}

//����->����->���ɿ�ִ�г���
//����Ԥ���뷢�� �������ڿ�ִ�г�����
//��ͺ���������
//1.����Դ����ͣ������Ͻ�������������
//2.�귢����Ԥ���룬�޷����ʣ���������
//3.��Լ�����ʱ�����Ч�ʱȺ����ߣ�����Ҫ���úͷ��أ�
//4.���ӳ�����ĳ��ȣ���������
//5.����з������ȼ������⣬����û��
//

//��ĸ�����
//#define P(X,Y) (X>Y?X:Y)
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int m = P(a++, b++);
//	//m=(a++��>(b++)?(a++):(b++)
//	// 10<20����a=11,b=21
//	//m=b++
//	//a=11,m=21,b=22	printf("%d %d ", a, b);
//	printf("m=%d\n", m);
//
//	return 0;
//}
////##������--�����ߵķ��źϲ���һ��--ֻ�����ں���
//#define P(X,Y) X##Y
//int main()
//{
//	int hanchang = 1000;
//	printf("%d\n", P(han,chang));
//	//	printf("%d\n", han##chang);
//	//	printf("%d\n", hanchang);		
//	return 0;
//}

////#������--ֻ���ں�ʹ��-�Ѻ�Ĳ������뵽�ַ�����
//#define PEINT(X,FORM) printf("the value of "#X" is "FORM,X)
//int main()
//{
//	int a = 10;
//	PEINT(a, "%d\n");
//	//printf("the value of "#X" is "FORM, X)
//	//#X�Զ��滻�ɴ���ı�����a��FORM�滻��"%d\n"
//
//	float f = 5.5;
//	PEINT(f, "%f\n");
//	//printf("the value of "#X" is "FORM, X)
//	//#X�Զ��滻�ɴ���ı�����f��FORM�滻��"%f\n"
//	return 0;
//}


//#define name ���û�������---��Ҫ��;
//#define M(x) x*x//���Ͻ� ���7
//#define M(x) ((x)*(x))//���Ͻ���д��//���16
// 1.���ú�ʱ�������������define����ĳ��������滻
// 2.Ȼ���滻��������ȥ�����ں꣬�����������ǵ�ֵ�滻
// 3.��飬�������define����ķ��ţ��ظ����϶���
// //ע��
// 1.������п��Գ��ֺ꣬��������������--���ܵݹ�
// 2.Ԥ����������define����ķ���ʱ���ַ����������ᱻ����
// 
//int main()
//{
//
//	printf("%d\n", M(3));//����3 Ȼ�����
//	printf("%d\n", M(3 + 1));//3+1*3+1=7
//	//#define��Ԥ����ʱ����滻�����������
//	return 0;
//}
