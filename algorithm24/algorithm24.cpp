#include<stdio.h>
void main() {
	int R[6] = { 0, 30, 24, 71, 41, 43 };
	int sum = 0, i, MAX = 0, MIN = 100;
	float ave = 0.0;

	for (i = 1; i < 6; i++) {
		if (MAX < R[i])
			MAX = R[i];
		if (MIN > R[i])
			MIN = R[i];

		sum += R[i];
	}

	ave = sum / 5.;

	printf("maximum : %d, minimum : %d, sum : %d, ave : %.2f\n", MAX, MIN, sum, ave);
}