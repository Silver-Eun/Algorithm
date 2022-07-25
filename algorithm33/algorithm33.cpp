#include<stdio.h>
void main() {
	int size = 10, ren = 10, sum = 0;
	int P = size;
	int ARRAY[10];
	/*int ARRAY[10] = {10, 16, 24, 30, 1, 7, 9, 11, 6, 28};*/

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &ARRAY[i]);
	}

	printf("sum of ");
	do {
		ren = ARRAY[size - P] % 4;
		if (ren == 0) {
			sum += ARRAY[size - P];
			printf("%d ", ARRAY[size - P]);
		}
		P--;
	} while (P > 0);

	printf(" : %d\n", sum);
}