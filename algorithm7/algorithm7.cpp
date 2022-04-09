#include<stdio.h>
void main() {
	int i, cnt = 0, sum = 0;

	for (i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			cnt++;
			sum += i;
		}//if
	}//for

	printf("Number of multiples of 5 from 1 to 100 : %d\n", cnt);
	printf("Sum of multiples of 5 from 1 to 100 : %d\n", sum);
}