#include<stdio.h>
void main() {
	int i = 0, SU1 = 0, SU2 = 0, SU3 = 0;
	puts("Common multiples of 3 and 5 from 1 to 100");
	while (i <= 100) {
		i++;
		SU1 = i % 3;
		SU2 = i % 5;
		SU3 = SU1 + SU2;

		if (SU3 == 0) {
			printf("%d\n", i);
		}

	}
}