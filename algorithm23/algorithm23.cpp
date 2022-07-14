#include<stdio.h>
void main() {
	int sum = 0, A, B, i;
	scanf_s("%d%d", &A, &B);

	if (A > B) {
		for (i = 0; i <= A; i++) {
			sum += i;
		}
	}
	else {
		for (i = A; i <= B; i++) {
			sum += i;
		}
	}

	printf("sum from small to large : %d\n", sum);

	getchar();
}