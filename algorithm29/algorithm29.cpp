#include<stdio.h>
void main() {
	int A = 1, B = 1, T, H;
	T = A + B;

	puts("values ​​of the Fibonacci sequence");
	printf("%d %d", A, B);
	
	do {
		H = A + B;
		T = T + H;
		A = B;
		B = H;

		printf("%d ", B);
	} while (H < 34);

	printf(" = %d\n", T);
}