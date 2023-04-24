#include "LinkList.h"

#include <malloc.h>
#include <cstdio>

LinkList createListHead() {
	LinkList L = (LinkList)malloc(sizeof(Node));
	L->next = NULL;

	return L;
}

void foreachList(LinkList L) {
	for (LinkList p = L->next; p != NULL; p = p->next)
		printf("%d", p->data);
}

void insertHead(LinkList L, int e) {
	LinkList p = (LinkList)malloc(sizeof(Node));
	p->data = e;

	p->next = L->next;
	L->next = p;
}

void clearList(LinkList L) {
	for (LinkList p = L->next, q; p != NULL ; p = q) {
		q = p->next;
		free(p);
	}
	L->next = NULL;
}
