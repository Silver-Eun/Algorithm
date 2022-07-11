#include<stdio.h>
int main() {
	int A, B, Big, Small, NMG, GCM = 0;
	float LCM = 0;
	puts("Enter number");
	scanf_s("%d%d", &A, &B);

	if (A >= B) {
		Big = A; Small = B;
	}
	else {
		Big = B; Small = A;
	}

	while (1) {
		NMG = (Big % Small);
		if (NMG == 0) {
			GCM = Small;
			LCM = (float)(A * B / GCM);
			goto Label;
		}//if
		else {
			Big = Small;
			Small = Big;
		}
	}//while
Label:puts("Result");
	printf("GCM:%d\n", GCM);
	printf("LCM:%d\n", LCM);
}