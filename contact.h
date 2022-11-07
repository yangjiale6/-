#pragma once
#define max 1000
#define max_name 100
#define max_sex 20
#define max_tele 20
#define max_addr 30
#include<stdio.h>
#include<string.h>
void Initcontact(struct contact* ps);
void addcontact(struct contact* ps); 
void showcontact( struct contact* ps);
void delcontact(struct contact* ps);
void searchcontact(struct contact* ps);
void modifycontact(struct contact* ps);
enum Option
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};
struct peoinfo
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};
struct contact
{
	struct peoinfo data[max];
	int size;
};
