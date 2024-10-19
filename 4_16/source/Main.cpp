#include <stdio.h>
#include <stdlib.h>

char c = '*', s = ' ';
int i, j, k;

int main() {
	/*----------A----------*/
	printf("(a)\n");
	for (i = 1; i <= 10; i++) {
		for (j = 0; j < i; j++) {
			printf("%c", c);
		}
		printf("\n");
	}
	/*----------B----------*/
	printf("(b)\n");
	for (i = 10; i >= 1; i--) {
		for (j = 0; j < i; j++) {
			printf("%c", c);
		}
		printf("\n");
	}
	/*----------C----------*/
	printf("(c)\n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j < i; j++) {
			printf("%c", s);
		}
		for (k = 10; k >= i; k--) {
			printf("%c", c);
		}
		printf("\n");
	}
	/*----------D----------*/
	printf("(d)\n");
	for (i = 1; i <= 10; i++) {
		for (j = 0; j <= 9; j++) {
			if ((j + i) >= 10) {
				printf("%c", c);
			}
			else {
				printf("%c", s);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}