#include<stdio.h>
void main() {
	int HAP = 0, P, Q, N;

	printf("Enter 2 numbers \n");
	scanf_s("%d%d", &P, &Q);

	printf("sum of ");

	if (P > Q) {
		for (N = Q; N <= P; N+=2) {
			HAP += N;
			printf("%d", N);
		}
	}//P > Q

	if (P < Q) {
		for (N = P; N <= Q; N++) {
			if (N % 2 == 1) {
				HAP += N;
				printf("%d ", N);
			}
		/*
		for (N = P; N <= Q; N+=2) {
			HAP += N;
			printf("%d ", N);*/
		}
	}//P < Q

	printf(" : %d \n", HAP);
}