#include<stdio.h>
void main() {
	int JUMSU[5], RANK[5], i, j;
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &JUMSU[i]);
		RANK[i] = 1;
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (JUMSU[i] < JUMSU[j]) {
				RANK[i]++;
			}
		}//j
	}//i

	puts("score rank");
	for (i = 0; i < 5; i++) {
		printf("%d %d\n", JUMSU[i], RANK[i]);
	}
}