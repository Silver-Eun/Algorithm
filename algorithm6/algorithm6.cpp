#include<stdio.h>
void main() {
	int num, k, j, sum = 0;
	scanf_s("%d", &num);

	k = 2;

A:	while (k <= num) {
		for (j = 2; j <= k; j++) {
			if (k % j == 0) {
				if (k == j) {
					printf("prime number : %d ", k);
					sum += k;
				}
				k++;
				goto A;
			}//if-out
		}//for
	}//while

	printf("\n sum of prime number : %d\n", sum);
}