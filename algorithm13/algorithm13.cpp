#include<stdio.h>
void main() {
	int A[5], MIN = 9, L = 0, M = 0;
	puts("Enter 5 integers less than 10");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &A[i]);

	for (int i = 0; i < 5; i++) {
		if (A[i] < 3) {
			L = 3 - A[i];
		}
		else {
			L = A[i] - 3;
		}

		if (L < MIN) {
			MIN = L;
			M = A[i];
		}//if
	}//for

	printf("number closest to 3 : %d\n", M);
}