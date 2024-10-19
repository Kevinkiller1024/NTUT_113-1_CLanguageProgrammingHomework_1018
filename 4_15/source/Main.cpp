#include <stdio.h>
#include <stdlib.h>

float principal = 5000, interest_rate = 0.1;
int i, j, k, years = 1;

int main() {
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			principal += principal * interest_rate;
			printf("The %d year's compound amount:%.2f\n", years, principal);
			years++;
		}
		printf("interest rate:%.1f%%\n\n", interest_rate*100);
		interest_rate += 0.005;
	}
	system("pause");
	return 0;
}