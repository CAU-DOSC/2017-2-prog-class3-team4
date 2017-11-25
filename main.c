#include "project_header.h"

LINK creat_node(int value);
LINK append(LINK head, LINK cur);
int node_count(LINK first, LINK head);
void print_backword(LINK first, LINK head, int num);
void print_middle(LINK first, LINK head, int num);
void print_forword(LINK first, LINK head, int num);
void del_odd_element(LINK first, LINK head, int num);

int main(void){
	int user_num=0,count =0, num_node, odd=0;
	LINK head =NULL;
	LINK cur;
	LINK first_node =NULL;
	while(scanf("%d", &user_num)!=NULL){
		cur=creat_node(user_num);
		if(count ==0) first_node =cur;
		if(cur ==NULL) {
			printf("동적메모리 할당에 문제가 있습니다.\n");
			return 0;
		}
		head = append(head, cur);
		count++;
	}
	num_node =node_count(first_node, head);
	printf("Number of node: %d \n", num_node);
	print_backword(first_node,head,num_node);
	print_middle(first_node,head,num_node);
	print_forword(first_node, head, num_node);

	first_node=first_node->next;
	head = first_node;
	if(num_node %2 ==0)
		odd=num_node /2 -1;
	else odd=num_node/2;

	for(int i=0; i<odd;i++){
		head->next=head->next->next;
		head=head->next;
	}
	num_node =node_count(first_node, head);
	print_forword(first_node,head,num_node);
	return 0;
}

