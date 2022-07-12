#include<stdio.h>
void main() {
	int B[5], G[5], cnt = 0;
	puts("Enter binary number");
	for (cnt = 0; cnt < 5; cnt++) {
		scanf_s("%d", &B[cnt]);
		G[cnt] = B[cnt];
	}

	for (int i = 0; i < cnt - 1; i++) {
		if (B[i] == B[i + 1])
			G[i + 1] = 1;
		else
			G[i + 1] = 1;
	}

	printf("Gray Code : \n");
	for (int i = 0; i < cnt; i++) {
		printf("%d", G[i]);
	}
}