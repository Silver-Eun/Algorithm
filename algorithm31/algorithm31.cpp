#include<stdio.h>
void main() {
	int ARRAY[11] = { 0, 5, 7, 3, 9, 1, 8, 8, 3, 4, 11 };
	int H = 1, REM, EVENCNT = 0, ODDCNT = 0;
	puts("original data");
	for (int i = 0; i < 11; i++) {
		printf("%2d ", ARRAY[i]);
	}
	puts("");
	do {
		REM = ARRAY[H] % 2;
		if (REM == 0) {
			EVENCNT++;
		}
		else {
			ODDCNT++;
		}
		H++;
	} while (H < 11);

	printf("even number : %d , odd number : %d\n", EVENCNT, ODDCNT);
}