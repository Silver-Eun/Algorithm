#include<stdio.h>
void main() {
	int P, Q, A[6][6], i, j;

	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			A[i][j] = 0;
		}
	}

	P = 1; Q = 1;

	while (P < 6) {
		Q = 1;
		while (Q <= P) {
			A[P][Q] = Q;
			Q = Q + 1;
		}
		P = P + 1;
	}//while

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%2d ", A[i][j]);
		}
		puts("");
	}
}