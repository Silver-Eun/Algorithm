#include<Stdio.h>
void main() {
	int A[10] = {70, 88, 67, 45, 99, 77, 57, 92, 100, 30};

	int K = 0, MIN = 100, MAX = 0, HAP = 0, N = 10;
	float AVER;

	puts("data");
	for (int i = 0; i < 10; i++) {
		printf("%2d ", A[i]);
	}
	puts("");
	do{
		if (A[K] < MIN)
			MIN = A[K];
		else if (A[K] > MAX)
			MAX = A[K];

		HAP += A[K];
		K++;
	} while (K < N);
	
	AVER = (HAP - MIN - MAX) / (N - 2);
	puts("Average excluding highs and lows");
	printf("ave : %.2f, sum : %d\n", AVER, HAP);
}