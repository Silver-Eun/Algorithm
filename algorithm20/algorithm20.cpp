#include<stdio.h>
#define ROW 5
#define COL 3
void main() {
	int A[5][3], B[3][5], i, j, k = 0, L = 0, M = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			k++;
			A[i][j] = k;
		}
	}//Initialize A

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			if (A[i][j] < 10)
				printf(" %d ", A[i][j]);
			else
				printf("%d ", A[i][j]);
		}

		puts("");
	}//Initialize A
	
	puts("");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			B[L][M] = A[i][j];
			M++;
			if (M >= 5) {
				L++;
				M = 0;
			}//if
		}//j
	}//i
		
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			if(B[i][j] < 10 )
				printf(" %d ", B[i][j]);
			else
				printf("%d ", B[i][j]);
		}
		puts("");
	}
}//main