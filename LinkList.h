#ifndef LINKLIST_H_
#define LINKLIST_H_

//���Ա�ĵ�����洢�ṹ
typedef struct Node {
	int data;
	struct Node* next;
}Node;

//����LinkList
typedef struct Node* LinkList; 

//������ͷ��������
LinkList createListHead();

//�������
void foreachList(LinkList L);

//ͷ�巨
void insertHead(LinkList L, int e);

//����ɾ��
void clearList(LinkList L);

#endif // !LINKLIST_H_