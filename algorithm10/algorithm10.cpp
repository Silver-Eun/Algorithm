#include<stdio.h>
void main() {
	int J[5], s = 0, MAX = 0;
	puts("Enter 5 numbers");
	for (s = 0; s < 5; s++) {
		scanf_s("%d", &J[s]);
	}

	for (int i = 0; i < 5; i++) {
		if (J[i] > MAX)
			MAX = J[i];
	}

	printf("maximum : %d\n", MAX);
}