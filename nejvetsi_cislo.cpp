#include <stdio.h>

int main() {
	int a = 8, b = 6, c = 2;
	int max;

	if (a == b) {
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