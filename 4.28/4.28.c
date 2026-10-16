#include <stdio.h>

int main(void) {
    int paycode;
    double salary = 0.0;

    printf("Enter employee paycode (-1 to end): ");
    while (scanf("%d", &paycode) == 1 && paycode != -1) {
        switch (paycode) {
            case 1: { 
                double fixed_salary;
                printf("Enter manager's fixed weekly salary: ");
                scanf("%lf", &fixed_salary);
                salary = fixed_salary;
                printf("Manager's weekly pay is $%.2f\n\n", salary);
                break;
            }
            case 2: { 
                double hourly_wage, hours;
                printf("Enter hourly wage: ");
                scanf("%lf", &hourly_wage);
                printf("Enter total hours worked: ");
                scanf("%lf", &hours);

                if (hours <= 40) {
                    salary = hours * hourly_wage;
                } else {
                    salary = 40 * hourly_wage + (hours - 40) * hourly_wage * 1.5;
                }
                printf("Hourly worker's weekly pay is $%.2f\n\n", salary);
                break;
            }
            case 3: { 
                double gross_sales;
                printf("Enter gross weekly sales: ");
                scanf("%lf", &gross_sales);
                salary = 250.0 + (gross_sales * 0.057);
                printf("Commission worker's weekly pay is $%.2f\n\n", salary);
                break;
            }
            case 4: { 
                double pay_per_item;
                int items;
                printf("Enter fixed amount paid per item: ");
                scanf("%lf", &pay_per_item);
                printf("Enter number of items produced: ");
                scanf("%d", &items);
                salary = items * pay_per_item;
                printf("Pieceworker's weekly pay is $%.2f\n\n", salary);
                break;
            }
            default:
                printf("Invalid paycode entered.\n\n");
                break;
        }

        printf("Enter employee paycode (-1 to end): ");
    }

    return 0;
}