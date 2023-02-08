#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
//动态
void Initcontact(Contact* pc)
{
	pc->date  = (PeoInfo*)malloc(原始数据 * (sizeof(PeoInfo)));
	if (pc->date == NULL)
	{	
		perror("Initcontact");
		return;
	}
	pc->sz = 0;
	pc->capacity = 原始数据;

	//加载文件
	LocdContact(pc);
}

//静态
//void Initcontact(Contact* pc)
//{
//	pc->sz = 0;
//	//memset--内存初始化
//	memset(pc->date, 0, sizeof(pc->date));
//}
//动态
void AddContact(Contact* pc)
{
	//满了
	CheckCapacity(pc);

	//没满
	printf("请输入名字:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->date[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->date[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->date[pc->sz].addr);


	pc->sz++;
	printf("添加成功\n");
}
//静态
//void AddContact(Contact* pc)
//{
//	//满了
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，增加失败\n");
//		return;
//	}
//	//没满
//	printf("请输入名字:>");
//	scanf("%s", pc->date[pc->sz].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->date[pc->sz].age));
//	printf("请输入性别:>");
//	scanf("%s", pc->date[pc->sz].sex);
//	printf("请输入电话:>");
//	scanf("%s", pc->date[pc->sz].tele);
//	printf("请输入地址:>");
//	scanf("%s", pc->date[pc->sz].addr);
//
//
//	pc->sz++;
//	printf("添加成功\n");
//}



void PrintContact(const Contact* pc)
{
	int i = 0;
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", 
			pc->date[i].name,
			pc->date[i].age,
			pc->date[i].sex,
			pc->date[i].tele,
			pc->date[i].addr);
	}

}
//名字可能重复
static int FindByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->date[i].name, name) == 0)
		{
			return i;
		}

	}
	return -1;//不存在
}
//电话号码不可能重复
//static int FindByTele(Contact* pc, char tele[])
//{
//	int i = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (strcmp(pc->date[i].tele, tele) == 0)
//		{
//			return i;
//		}
//
//	}
//	return -1;//不存在
//}
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	//char tele[MAX_TELE] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，不需要\n");
		return;
	}
	//1.找到那个人
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	

	int pos = FindByName(pc, name);

	//int pos = FindByTele(pc, tele);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2.删除
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	//char tele[MAX_TELE] = { 0 };
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	//int pos = FindByTele(pc, tele);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	else
	{	
		//打印标题
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		
			printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pc->date[pos].name,
				pc->date[pos].age,
				pc->date[pos].sex,
				pc->date[pos].tele,
				pc->date[pos].addr);
	}
}

void ModifyContact(Contact* pc)
{

	char name[MAX_NAME] = { 0 };
	//char tele[MAX_TELE] = { 0 };
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	//int pos = FindByTele(pc, tele);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->date[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->date[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->date[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->date[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->date[pos].addr);
	}
	printf("修改成功\n");

}

void DestoryContact(Contact* pc)
{
	free(pc->date);
	pc->sz = 0;
	pc->date = NULL;
	pc->capacity = 0;
}

void SortContact(Contact* pc)
{
	int i = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		if (strcmp(pc->date[i].name, pc->date[i + 1].name) > 0)
		{
			PeoInfo p = pc->date[i + 1];
			pc->date[i + 1] = pc->date[i];
			pc->date[i] = p;
		}
	}
	printf("排序成功\n");
}

void SaveContact(Contact* pc)
{
	
	FILE* pf = fopen("contact,dat", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	//写信息
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->date + i, sizeof(PeoInfo), 1, pf);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}

void LocdContact(Contact* pc)
{

	FILE* pf = fopen("contact,dat", "r");
	if (pf == NULL)
	{
		perror("LocdContact");
		return;
	}
	//读取
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		//判断扩容
		CheckCapacity(pc);
		pc->date[pc->sz] = tmp;
		pc->sz++;

	}
	//关闭
	fclose(pf);
	pf = NULL;
}
void CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->date, pc->capacity + 增加数据);
		if (ptr != NULL)
		{
			pc->date = ptr;
			pc->capacity += 增加数据;
			printf("扩容成功\n");
		}
		else
		{
			perror("AddContact");
			printf("扩容失败\n");
			return;
		}
	}
}