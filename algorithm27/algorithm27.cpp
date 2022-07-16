#include<stdio.h>
void main() {
	int N = 0, SU1 = 0, SU2 = 0, SU3 = 0;
	puts("common multiples of 6 and 7");

	while (N <= 600) {
		N++;
		SU1 = N % 6;
		SU2 = N % 7;
		SU3 = SU1 + SU2;
		
		if (SU3 == 0) {
			printf("%d \n", N);
		}
	}//while

	getchar();
}