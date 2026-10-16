#include <stdio.h>

int main(void) {
    int hours;
    double hourly_rate;
    double salary;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);

    while (hours != -1) {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &hourly_rate);

        if (hours <= 40) {
            salary = hours * hourly_rate;
        } else {
            salary = 40 * hourly_rate + (hours - 40) * hourly_rate * 1.5;
        }

        printf("Salary is $%.2f\n\n", salary);

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);
    }

    return 0;
}