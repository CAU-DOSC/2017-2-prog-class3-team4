#include "Juggling_Algo.h"

/*
	callee �Լ� ������ �����Ҵ��� �����Ƿ� caller�Լ����� memory free�� �� ���ֽñ� ��Ź�帳�ϴ�.
*/

int gcd(int m, int n) {
	return n ? gcd(n, m%n) : m;
}
char* Juggling(char arr[], int n, int k) {
	int d = -1, i, j, temp;
	char* dest = (int*)malloc((sizeof(char))*n);
	for (int i = 0; i < n; i++) {
		dest[i] = arr[i];
	}
	for (i = 0; i < gcd(n, k); i++) {
		j = i;
		temp = dest[i];
		while (1) {
			d = (j + k) % n;
			if (d == i) break;

			dest[j] = dest[d];
			j = d;
		}
		dest[j] = temp;
	}
	return dest;
}


