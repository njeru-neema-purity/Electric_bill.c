#include <stdio.h>

double calculateElectricBill(int units) {
    double bill;

    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        bill = (100 * 10.0) + (100 * 15.0)
               + ((units - 200) * 20.0);
    }

    return bill;
}

int main() {
    int units;
    double bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units.\n");
        return 1;
    }

    bill = calculateElectricBill(units);

    printf("Electricity bill: KES %.2f\n", bill);

    return 0;
}