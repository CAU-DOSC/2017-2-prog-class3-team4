#include "Project_Header.h"

int main(void) {
	int num = 0, d = 0, length = 0;
	char ary[30] = { 0 };
	char *ans = 0;
	printf("Enter Input : ");
	scanf("%d %d %s", &num, &d, ary);
	while (ary[length])
		length++;
	ans = trivial_rotation(ary, num, d, length);
	printf("answer : ");
	puts(ans);
	return 0;
}