#include<stdio.h>
void main() {
	int i, sum = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			sum -= i;
		}
		else {
			sum += i;
		}
	}
	printf("sum of 1-2+3-4+...+99-100 is : %d \n", sum);
}