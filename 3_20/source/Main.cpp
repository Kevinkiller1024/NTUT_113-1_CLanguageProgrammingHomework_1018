#include <stdio.h>
#include <stdlib.h>

float hours,rate,salary;

int main() {
	while (1) {
		salary = rate = hours = 0;
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%f", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &rate);
		salary = hours * rate;
		printf("Salary is %.2f:\n\n", salary);
	}
	system("pause");
	return 0;
}