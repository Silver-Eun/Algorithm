#include<stdio.h>
void main() {
	int A[5][5], i, k = 0, j;

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++) {
			k++;
			A[j][i] = k;
		}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {

			printf("%2d ", A[i][j]);
			
			/*if (A[i][j] < 10) {
				printf(" %d ", A[i][j]);
			}//if
			else {
				printf("%d ", A[i][j]);
			}//else
			*/
		}//j
		puts("");
	}//i
}//main