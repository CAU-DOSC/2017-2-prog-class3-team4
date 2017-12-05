#include "Project_Header.h"
char *Vector_rotation(char *ary, int d, int n)
{
	char temp;
	char* str = (int*)malloc((sizeof(char))*n);
	for (int i = 0; i<n; i++){
		*(str+i) = ary[i];
	}
	if (d > 0){
		for (int j = d; j > 0; j--) {
			temp = *str;
			for (int i = 1; i < n; i++) {
				*(str+(i - 1)) = *(str+i);
			}
			*(str+(n - 1)) = temp;
		}
		return *str;
	}
	else if (d < 0){
		for (int j = d; j < 0; j++) {
			temp = *(str+(n - 1));
			for (int i = n - 2; i >= 0; i--) {
				*(str+(i + 1)) = *(str+i);
			}
			*str = temp;
		}
		return *str;
	}
}