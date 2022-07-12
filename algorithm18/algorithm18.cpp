#include<stdio.h>
void main() {
	int A[5][5], i, j, k = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			k++;
			A[i][j] = k;
		}//j
	}//i

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (A[i][j] < 10) {
				printf(" %d ", A[i][j]);
			}
			else {
				printf("%d ", A[i][j]);
			}
		}
		puts("");
	}
}