#include<stdio.h>
void main() {
	// 1-2=4-7+11-16+22-29+37-46
	int i, j = 1 , k = 0;
	int cnt = 0;

	printf("sum of ");

	for (i = 0; i < 10; i++) {
		j = j + i;
		cnt++;
		if (cnt % 2 == 0) {
			k = k - j;
			printf("-%d ", j);
		}
		else {
			k = k + j;
			printf("%d ", j);
		}
	}
	printf("is %d\n", k);
}