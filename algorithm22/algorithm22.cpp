#include<stdio.h>
void main() {
	int Gu[10], A, B;
	for (A = 1; A <= 9; A++) {
		for (B = 1; B <= 9; B++) {
			Gu[B] = A * B;
			printf("%d*%d = %d\n", A, B, Gu[B]);
		}
		puts("");
	}
}