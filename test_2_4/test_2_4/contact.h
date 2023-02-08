#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000

#define ԭʼ���� 3
#define �������� 2

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];

}PeoInfo;
//��̬
typedef struct Contact
{
	//����ͨѶ¼
	PeoInfo* date;
	//������
	int sz;
	int capacity;
}Contact;

//��̬
//typedef struct Contact
//{
//	//����ͨѶ¼
//	PeoInfo date[MAX];
//	//������
//	int sz ;
//}Contact;


//��ʼ��ͨѶ¼
void Initcontact(Contact* pc);

//����
void AddContact(Contact* pc);

//����
void SortContact(Contact* pc);

//��ӡ
void PrintContact(const Contact* pc);

//ɾ��
void DelContact(Contact* pc);

//����
void SearchContact(Contact* pc);

//�޸�
void ModifyContact(Contact* pc);

//�ÿ�
void DestoryContact(Contact* pc);

//�洢��Ϣ���ļ�
void SaveContact(Contact* pc);

//�����ļ�
void LocdContact(Contact* pc);

//����
void CheckCapacity(Contact* pc);