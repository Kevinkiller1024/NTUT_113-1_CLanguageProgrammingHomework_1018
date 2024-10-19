#include <stdio.h>
#include <stdlib.h>

int account, balance, charges, credits, limit;

int main() {
	while (1) {
		account = balance = charges = credits = 0;
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &account);
		if (account == -1)
			break;
		printf("Enter beginning balance:");
		scanf_s("%d", &balance);
		printf("Enter total charges:");
		scanf_s("%d", &charges);
		printf("Enter total credits:");
		scanf_s("%d", &credits);
		printf("Enter credits limit:");
		scanf_s("%d", &limit);
		balance += credits;
		if (balance > limit) {
			printf("Account:\t%d\n", account);
			printf("Credits limit:  %d\n", limit);
			printf("Balance:\t%d\n", balance);
			printf("Credits Limit Exceeded\n\n");
		}
		else
			printf("\n");
	}
	system("pause");
	return 0;
}