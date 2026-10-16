#include <stdio.h>

int main(void) {
    int account;
    double beginning_balance;
    double total_charges;
    double total_credits;
    double credit_limit;
    double new_balance;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);

    while (account != -1) {
        printf("Enter beginning balance: ");
        scanf("%lf", &beginning_balance);

        printf("Enter total charges: ");
        scanf("%lf", &total_charges);

        printf("Enter total credits: ");
        scanf("%lf", &total_credits);

        printf("Enter credit limit: ");
        scanf("%lf", &credit_limit);

        new_balance = beginning_balance + total_charges - total_credits;

        if (new_balance > credit_limit) {
            printf("Account:      %d\n", account);
            printf("Credit limit: %.2f\n", credit_limit);
            printf("Balance:      %.2f\n", new_balance);
            printf("Credit Limit Exceeded.\n");
        }

        printf("\n"); 

        printf("Enter account number (-1 to end): ");
        scanf("%d", &account);
    }

    return 0;
}