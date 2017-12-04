char *Vector_rotation(char *str, int d, int n)
{
	char temp;
	for (int j = d; j > 0; j--) {
		temp = str[0];
		for (int i = 1; i < n; i++) {
			str[i - 1] = str[i];
		}
		str[n - 1] = temp;
	}
}