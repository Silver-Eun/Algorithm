#include<stdio.h>
void main() {
	int S[5], kor, eng, mat, N, K, J, RANK;
	float AVG, A[5];
	N = 0;
	puts("Enter an integer.");

	do {
		scanf_s("%d%d%d", &kor, &eng, &mat);
		S[N] = kor + eng + mat;
		AVG = S[N] / 3;
		A[N] = AVG;
		N++;
	} while (N < 5);

	for (J = 0; J < 5; J++) {
		RANK = 1;
		for (K = 0; K < 5; K++) {
			if (S[J] < S[K]) RANK++;
		}
		printf("num : %d, sum : %d, ave : %.2f, rank : %d\n", J + 1, S[J], A[J], RANK);
	}
}