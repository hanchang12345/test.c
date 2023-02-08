#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000

#define 原始数据 3
#define 增加数据 2

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];

}PeoInfo;
//动态
typedef struct Contact
{
	//创建通讯录
	PeoInfo* date;
	//多少人
	int sz;
	int capacity;
}Contact;

//静态
//typedef struct Contact
//{
//	//创建通讯录
//	PeoInfo date[MAX];
//	//多少人
//	int sz ;
//}Contact;


//初始化通讯录
void Initcontact(Contact* pc);

//增加
void AddContact(Contact* pc);

//排序
void SortContact(Contact* pc);

//打印
void PrintContact(const Contact* pc);

//删除
void DelContact(Contact* pc);

//查找
void SearchContact(Contact* pc);

//修改
void ModifyContact(Contact* pc);

//置空
void DestoryContact(Contact* pc);

//存储信息到文件
void SaveContact(Contact* pc);

//加载文件
void LocdContact(Contact* pc);

//扩容
void CheckCapacity(Contact* pc);