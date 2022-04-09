#include<stdio.h>
void main() {
	int a = 1;
	float sum = 1;

	printf("sum of ");

	printf("1 ");
	
	for (a = 1; a <= 10; a++) {
		sum += 1 / float(a);
		printf("+ 1/%d ", a);
	}
	
	printf("is %.2f\n", sum);
}