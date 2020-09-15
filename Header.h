#pragma once
#define _CRT_SECURE_NO_WARNINGS


#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define SIZE 10
#define LENGTH 128
#define OPTIONS 9

struct ElementOfTree                                                                                                    //��������� ����������� �������� ������
{
	char* key;
	char* str;
	struct ElementOfTree* Parent;
	struct ElementOfTree* Right;
	struct ElementOfTree* Left;
};

void Load(char* path, struct ElementOfTree** trunk);                                                                     //���� ����� � ������ ��������� ����������� ����� ���� ������ �� ����� 

char* GetStr(int a);                                                                                                     //������� ����� ������ ��������

void PrintMenu(void);                                                                                                    //������� ��� ������ ���� �� �����

void Printing2(struct ElementOfTree* trunk, char* k);

int AddNewBranch(struct ElementOfTree** trunk, char* key, char* str);                                                    //������� ���������� ������ �������� �����

int AddNewBranch1(struct ElementOfTree** trunk, char* key, char* str);                                                    //������� ���������� ������ �������� �����

void Printing(struct ElementOfTree* trunk);                                                                              //������� ��� ������ ��������� ����� �� �����

void PrintNode(struct ElementOfTree* trunk, int offset);

struct ElementOfTree* SearchNode( struct ElementOfTree* Branch,  char* key);										     //��������������� ������� ��� ������ ����������� �������� �����

void PrintOne(const struct ElementOfTree* Branch, const int key);                                                        //������� ��� ������ ����������� �������� ����� �� �����

void LoadingAdditional(struct ElementOfTree* Branch);                                                                    //�������� ����������� ����� �� ������ �� �����

void WritingData(struct ElementOfTree* Branch);                                                                          //�������� ��� ������ � ���� ������ �� ��������� �����

void Save(char* path, struct ElementOfTree* Branch);                                                                     //������� ������������ �������� �� ������ ������ �� ��������� ����� ����

int FromTo(char** key);                                                                                                  //��������������� ������� �� �������� �������� �� ������� ASCII � �������� ����������

void DeleteNode(struct ElementOfTree** ptr, struct ElementOfTree* tmp);                                                  //������� ��� �������� �������� �����

struct ElementOfTree* MaxElement(struct ElementOfTree* ptr);                                                             //��������������� ������� �� ���������� ������������� �������� ����� ����������� �� ���� 

struct ElementOfTree* MinElement(struct ElementOfTree* ptr);                                                             //��������������� ������� �� ���������� ������������ �������� ����� ����������� �� ���� 

int Timing(void);

char* randomGet(int num);

void DelTree(struct ElementOfTree**);


















/*char* GetStr(void);

void AddNewBranch(struct ElementOfTree* trunk, int* key, char* str);

int FromTo(int* key);

int* GetKey(void);

void PrintMenu(void);

struct ElementOfTree* Habitation(struct ElementOfTree* trunk, int* key);

struct Node
{
	int key;
	struct Item* info;
};

struct Item
{
	int version;
	char* string;
	struct Item* next;
};

int SearchByKey(const struct Node* tab, const int key);

int SearchOfVersion(const struct Node* tab, const int key);

void Printing(struct Node* tab);

void swap(struct Node* tab, const size_t i, const size_t j);

void Sorting(struct Node* tab);

void DeleteByKey(struct Node* tab, const size_t key);

void DeleteByVersion(struct Node* tab, const size_t key, size_t version); */
