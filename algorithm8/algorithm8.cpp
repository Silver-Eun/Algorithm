#include<stdio.h>
void main() {
	int i, j, A[100], num, L = 0;
	puts("Enter numbers");
	scanf_s("%d", &num);
	for (j = 1; j <= num; j++) {
		if (num %j == 0) {
			L++;
			A[L] = j;
		}//if
	}//for

	puts("divisor output");
	for (i = 1; i <= L; i++)
		printf("%dth : %d\n", i, A[i]);
}