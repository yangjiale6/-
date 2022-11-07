#include<stdio.h>
#include"contact.h"
void menu()
{
	printf("*****  1.add          2.del    *****\n");
	printf("*****  3.search       4.modify *****\n");
	printf("*****  5.show         6.sort   *****\n");
	printf("*****  0.exit                  *****\n");
	printf("************************************\n");
}

int main()
{

	int input = 0;
	struct contact con;
	Initcontact(&con);
	
	do
	{
		menu();
		printf("请选择：》");
		scanf_s("%d", &input);
		switch (input)
		{
		case add:
			addcontact(&con);
			break;
		case del:
			delcontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modifycontact(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			break;
		case 0:
			printf("退出程序!\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
		}

	} while (input);
}