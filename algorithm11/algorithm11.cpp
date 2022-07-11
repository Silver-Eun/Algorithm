#include<stdio.h>
void main() {
	int i, J[5], MIN = 100, MAX = 0, HAB = 0;
	puts("Enter 5 numbers");

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &J[i]);
	}

	for (i = 0; i < 5; i++) {
		if (J[i] > MAX)
			MAX = J[i];
	}

	for (i = 0; i < 5; i++) {
		if (J[i] < MIN)
			MIN = J[i];
	}

	HAB = MAX + MIN;
	printf("minimum : %d, maximum : %d \n", MIN, MAX);
	printf("minimum + maximum : %d \n", HAB);
}