#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void Initcontact(struct contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void addcontact(struct contact* ps)
{
	if (ps->size == max)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("���������֣���");
		scanf("%s", ps->data[ps->size].name);
		printf("���������䣺��");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա𣺡�");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰����");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ����");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	

	}
}
void showcontact(struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for ( i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr

			);
		}
	}
}
 static int findbyname(struct contact* ps, char name[max_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void delcontact(struct contact* ps)
{
	char name[max_name];
	printf("������Ҫɾ���˵����֣���");
	scanf("%s", name);
	int pos = findbyname(ps, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}

	
	else
	{
		int j = 0;
		for ( j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void searchcontact(struct contact* ps)
{
	char name[max_name];
	printf("����Ҫ���ҵ�����\n");
	scanf("%s", name);
	int pos = findbyname(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}
void modifycontact(struct contact* ps)
{
	char name[max_name];
	printf("������Ҫ�޸��˵�����:��");
	scanf("%s", name);
	int pos=findbyname(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		printf("���������֣���");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺��");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա𣺡�");
		scanf("%s", ps->data[pos].sex);
		printf("������绰����");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ����");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");

	}

}
