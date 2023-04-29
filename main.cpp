#include <cstdio>

#include "LinkList.h"


int main() {
	/*LinkList L = createListHead();

	foreachList(L);

	for(int i = 0, num = 0; i < 5; i ++) {
		scanf("%d", &num);
		insertHead(L, num);
	}

	foreachList(L);

	clearList(L);

	foreachList(L);*/

	int i = 1000;
	float f = reinterpret_cast<float&>(i);
	float f3 = static_cast<float>(i);
	float f2 = (float)i;
	printf("%d %f %f %f", i, f, f2, f3);

	return 0;
}