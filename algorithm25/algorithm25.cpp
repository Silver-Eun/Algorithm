#include<stdio.h>
void main() {
	int P = 0, Q, A[6][6], i, j;  // When an error occurs A[7][6]

	for (i = 0; i <= 5; i++) {
		for (j = 0; j <= 5; j++) {
			A[i][j] = 0;
		}
	}

	do {
		P++;
		Q = 0;
		do {
			Q++;
			A[P][Q] = Q + 1;
		} while (Q <= P);

	} while (P < 5);
	
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%2d ", A[i][j]);
		}

		puts("");
	}
}