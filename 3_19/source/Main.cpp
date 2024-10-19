#include <stdio.h>
#include <stdlib.h>

float principal, reate, days, interest;

int main() {
	while (1) {
		principal = reate = days = interest = 0;
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &principal);
		if (principal == -1)
			break;
		printf("Enter interest reate:");
		scanf_s("%f", &reate);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &days);
		interest = principal * reate * days / 365;
		printf("The interest charge is %.2f:\n\n", interest);
	}
	system("pause");
	return 0;
}