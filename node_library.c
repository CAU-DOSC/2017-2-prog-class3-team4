#include "project_header.h"

LINK creat_node(int value) {
	LINK cur;
	cur = (LINK)malloc(sizeof(NODE));
	if (cur == NULL) {
		printf("노드 생성을 위한 메모리 할당에 문제가 있습니다.\n");
		return NULL;
	}
	cur->value = value;
	cur->next = NULL;
	return cur;
}

LINK append(LINK head, LINK cur) {
	LINK next_node = head;
	if (head == NULL) {
		head = cur;
		return head;
	}
	while (next_node->next != NULL)
		next_node = next_node->next;
	next_node->next = cur;
	return head;
}