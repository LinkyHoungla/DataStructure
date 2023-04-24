#include <cstdio>

#include "LinkList.h"


int main() {
	LinkList L = createListHead();

	foreachList(L);

	for(int i = 0, num = 0; i < 5; i ++) {
		scanf("%d", &num);
		insertHead(L, num);
	}

	foreachList(L);

	clearList(L);

	foreachList(L);

	return 0;
}