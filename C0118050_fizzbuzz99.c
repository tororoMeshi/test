#include <stdio.h>

int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			if (i*j % 3 == 0 && i*j % 5 == 0) {
				printf("FizzBuzz ");
			} else if (i*j % 3 == 0) {
				printf("    Fizz ");
			} else if (i*j % 5 == 0) {
				printf("    Bazz ");
			} else {
				printf("%8d ", i*j);
			}
		}
		printf("\n");
	}
	return 0;
}
