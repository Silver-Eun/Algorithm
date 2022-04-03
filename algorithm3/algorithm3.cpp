#include<stdio.h>
void main() {
	int i, j = 1, k = 1;

	for (i = 0; i < 10; i++) {
		j = j + i;
		k = k + j;
		printf("%d ", j);
	}

	printf("\n");

	printf("\nresult of 1+2+4+7...37+49 is %d", k);
}