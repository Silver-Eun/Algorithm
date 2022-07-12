#include<stdio.h>
void main() {
	int A[10], i, M = 0, L = 0, H = 9, k;

	puts("Enter value");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &A[i]);
	}

	puts("Enter the value to find");
	scanf_s("%d", &k);

	while (1) {
		if (L > H) {
			puts("No value");
		}
		else {
			M = (int)((L + H) / 2);
			if (k == A[M]) {
				printf("value to find : %d\n", A[M]);
				break;
			}//if
			else {
				if ((k < A[M]))
					H = M - 1;
				else
					L = M + 1;
			}
		}//else
	}//while
}