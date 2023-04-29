#ifndef DLINKLIST_H_
#define DLINKLIST_H_

//线性表的单链表存储结构
typedef struct DNode {
	int data;
	struct DNode* prior;
	struct DNode* next;
}DNode;

//定义DLinkList
typedef struct DNode* DLinkList;

#endif // !LINKLIST_H_
