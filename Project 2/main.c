#include "Project_Header.h"

int main(void) {
	int num = 0, d = 0, length = 0, test = 0;
	long T_jug = 0, T_trivial = 0, T_reverse = 0;
	time_t starttime = 0, endtime = 0;
	printf("Enter Test Size(array size = 10^n) : ");
	scanf("%d", &size);
	for (int i = 1; i < (size + 1); i++) {
		num = 0, d = 0, length = 0, test = 0, T_jug = 0, T_trivial = 0, T_reverse = 0
		char* array = (int*)malloc((sizeof(char))*pow(10,i));
		length = pow(10,i);
		d = Generate_d();
		num = Generate_n(length)
		array = Generate_array(length)

		starttime = clock();
		trivial_rotation(array, num, d, length);
		endtime = clock();
		T_trivial = endtime - starttime;

		starttime = clock();
		Juggling(array, length, n)
		endtime = clock();
		T_jug = endtime - starttime;

		starttime = clock();
		Reverse(array, n, length);
		endtime = clock();
		T_reverse = endtime - starttime;

		printf("STR Length   Rotate Distance   :   Trivial    Juggling   Reverse \n")
		printf("%13d%19d:   %8d   %8d   %8d", length, d, T_trivial, T_jug, T_reverse);
	}
	return 0;
}
