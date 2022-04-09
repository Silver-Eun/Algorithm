#include<stdio.h>
void main() {
	int a, b = 1;
	float hab = 0;

	printf("sum of");

	for (a = 1; a <= 9; a++) {
		b++;
		hab += float(a) / float(b);
		printf(" %d/%d ", a, b);
	}

	printf("is %.2f\n", hab);
}