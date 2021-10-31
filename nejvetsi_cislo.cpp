#include <stdio.h>

int main() {
	int a = 8, b = 8, c = 8;
	int max;

	if (a == b == c) {
		max = a;
	}
	else{
		if ((a > b) && (a > c)) {
			max = a;
		}
		else {
			if ((b > a) && (b > c)) {
				max = b;
			}
			else {
				max = c;
			}
		}
	}
	printf("nejvetsi je cislo %d", max);
}