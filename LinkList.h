#pragma once
#ifndef LINKLIST_H_
#define LINKLIST_H_

//线性表的单链表存储结构
typedef struct Node {
	int data;
	struct Node* next;
}Node;

//定义LinkList
typedef struct Node* LinkList; 

//创建带头结点的链表
LinkList createListHead();

//链表遍历
void foreachList(LinkList L);

//头插法
void insertHead(LinkList L, int e);

//整表删除
void clearList(LinkList L);

#endif // !LINKLIST_H_