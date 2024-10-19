#include <stdio.h>
#include <stdlib.h>

float sales,salary;

int main() {
	while (1) {
		sales = salary = 0;
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &sales);
		if (sales == -1)
			break;
		salary = sales * 0.09 + 200;
		printf("Salary is %.2f\n\n", salary);
	}
	system("pause");
	return 0;
}