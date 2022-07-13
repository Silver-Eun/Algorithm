#include<stdio.h>
void main() {
	int A[6][6], B[6][6], i, j, k = 0;
	
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			A[i][j] = 0;
			B[i][j] = 0;
		}
	}

	for (i = 5; i >= 1; i--) {
		for (j = i; j <= 5; j++) {
			k++;
			A[i][j] = k;
		}
	}

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%2d ", A[i][j]);
		}
		puts("");
	}

	puts("\n--------------------- after moving---------------------\n");

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			B[j][6 - i] = A[i][j];
		}
	}

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%2d ", B[i][j]);
		}
		puts("");
	}
}