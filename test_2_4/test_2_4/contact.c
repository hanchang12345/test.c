#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
//��̬
void Initcontact(Contact* pc)
{
	pc->date  = (PeoInfo*)malloc(ԭʼ���� * (sizeof(PeoInfo)));
	if (pc->date == NULL)
	{	
		perror("Initcontact");
		return;
	}
	pc->sz = 0;
	pc->capacity = ԭʼ����;

	//�����ļ�
	LocdContact(pc);
}

//��̬
//void Initcontact(Contact* pc)
//{
//	pc->sz = 0;
//	//memset--�ڴ��ʼ��
//	memset(pc->date, 0, sizeof(pc->date));
//}
//��̬
void AddContact(Contact* pc)
{
	//����
	CheckCapacity(pc);

	//û��
	printf("����������:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->date[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->date[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->date[pc->sz].addr);


	pc->sz++;
	printf("��ӳɹ�\n");
}
//��̬
//void AddContact(Contact* pc)
//{
//	//����
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼����������ʧ��\n");
//		return;
//	}
//	//û��
//	printf("����������:>");
//	scanf("%s", pc->date[pc->sz].name);
//	printf("����������:>");
//	scanf("%d", &(pc->date[pc->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->date[pc->sz].sex);
//	printf("������绰:>");
//	scanf("%s", pc->date[pc->sz].tele);
//	printf("�������ַ:>");
//	scanf("%s", pc->date[pc->sz].addr);
//
//
//	pc->sz++;
//	printf("��ӳɹ�\n");
//}



void PrintContact(const Contact* pc)
{
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
//���ֿ����ظ�
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
	return -1;//������
}
//�绰���벻�����ظ�
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
//	return -1;//������
//}
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	//char tele[MAX_TELE] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����Ҫ\n");
		return;
	}
	//1.�ҵ��Ǹ���
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	

	int pos = FindByName(pc, name);

	//int pos = FindByTele(pc, tele);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//2.ɾ��
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	//char tele[MAX_TELE] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	//int pos = FindByTele(pc, tele);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	else
	{	
		//��ӡ����
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		
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
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	//int pos = FindByTele(pc, tele);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->date[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->date[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->date[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->date[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->date[pos].addr);
	}
	printf("�޸ĳɹ�\n");

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
	printf("����ɹ�\n");
}

void SaveContact(Contact* pc)
{
	
	FILE* pf = fopen("contact,dat", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	//д��Ϣ
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->date + i, sizeof(PeoInfo), 1, pf);
	}
	//�ر��ļ�
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
	//��ȡ
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		//�ж�����
		CheckCapacity(pc);
		pc->date[pc->sz] = tmp;
		pc->sz++;

	}
	//�ر�
	fclose(pf);
	pf = NULL;
}
void CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->date, pc->capacity + ��������);
		if (ptr != NULL)
		{
			pc->date = ptr;
			pc->capacity += ��������;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("AddContact");
			printf("����ʧ��\n");
			return;
		}
	}
}