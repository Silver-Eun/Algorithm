#include<stdio.h>
void main() {
	int totodd = 0, toteven = 0, tot10su = 0;
	int cntodd = 0, cnteven = 0, cnt10su = 0;
	int num = 100;
	while (num <= 500) {
		if (num % 2 != 1) {
			toteven += num;
			cnteven++;
		}
		else {
			totodd += num;
			cntodd++;
		}
		
		if (num % 10 == 0) {
			tot10su += num;
			cnt10su++;
		}
		num++;
	}

	printf("sum of even numbers from 100 to 500, Count : %d %d\n", toteven, cnteven);
	printf("Sum of odd numbers from 100 to 500, Count : %d %d\n", totodd, cntodd);
	printf("Sum of multiples of 10 from 100 to 500, Count : %d %d\n", tot10su, cnt10su);
}