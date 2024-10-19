#include <stdio.h>
#include <stdlib.h>

char a = '+',s = ' ';

int main() {
	for (int i = 0; i <= 2; i++) {
		if (i != 1) {
			for (int j = 0; j < 12; j++) {
				printf("%c", a);
			}
		}
		else {
			for (int j = 0; j < 12; j++) {
				if((j == 0) || (j == 11))
					printf("%c", a);
				else
					printf("%c", s);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}