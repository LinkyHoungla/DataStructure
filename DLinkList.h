#ifndef DLINKLIST_H_
#define DLINKLIST_H_

//���Ա�ĵ�����洢�ṹ
typedef struct DNode {
	int data;
	struct DNode* prior;
	struct DNode* next;
}DNode;

//����DLinkList
typedef struct DNode* DLinkList;

#endif // !LINKLIST_H_
