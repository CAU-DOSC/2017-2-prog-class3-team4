#include<stdio.h>
int *Reverse(int *str, int d, int n) {

	if (n >= 0)
	{
		for (int a = 1; a <= n; a++)
		{
			for (int b = 0; b < d - 1; b++)
			{
				char temp = str[b];
				str[b] = str[b + 1];
				str[b + 1] = temp;
			}
		}
	}
	else
	{
		for (int a = n; a<0; a++)
		{
			for (int b = d-1; b>0; b--)
			{
				char temp = str[b];
				str[b] = str[b - 1];
				str[b - 1] = temp;
			}
		}
	}
	return 0;
}

