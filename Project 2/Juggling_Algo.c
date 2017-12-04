#include "Juggling_Algo.h"

/*
	callee 함수 내에서 동적할당을 했으므로 caller함수에서 memory free를 꼭 해주시길 부탁드립니다.
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


