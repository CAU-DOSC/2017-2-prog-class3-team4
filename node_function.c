#include "project_header.h"

LINK creat_node(int value);
LINK append(LINK head, LINK cur);

int node_count(LINK first, LINK head) {
	int count = 0;
	head = first;
	while (head != NULL) {
		count++;
		head = head->next;
	}
	return count;
}

void print_backword(LINK first, LINK head, int num) {
	printf("Print Backword : ");
	for (int i = 0; i < num; i++) {
		head = first;
		for (int j = 0; j < num - i - 1; j++) {
			head = head->next;
		}
		printf("%d ", head->value);
	}
}

void print_middle(LINK first, LINK head, int num) {
	int prtnum = num / 2;
	head = first;
	if (num % 2 == 0) {
		for (int i = 0; i < (prtnum - 1); i++)
			head = head->next;
	}
	else {
		for (int i = 0; i < prtnum; i++)
			head = head->next;
	}
	printf("\nMiddle value   : %d", head->value);
}

void print_forword(LINK first, LINK head, int num) {
	printf("\nPrint Forword  : ");
	head = first;
	for (int i = 0; i < num; i++) {
		printf("%d ", head->value);
		head = head->next;
	}
}

void del_odd_element(LINK first, LINK head, int num) {
	first = first->next;
	head = first;
}
