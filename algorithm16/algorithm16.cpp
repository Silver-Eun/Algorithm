#include<stdio.h>
void main() {
	int A[5], i, j, temp;
	puts("Enter value");

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &A[i]);
	}

	for (j = 4; j >= 0; j--) {
		for (i = 0; i < j; i++) {
			if(A[i] > A[i + 1]){
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}
		}
	}

	puts("after sorting");
	for (i = 0; i < 5; i++) {
		printf("%d ", A[i]);
	}

}