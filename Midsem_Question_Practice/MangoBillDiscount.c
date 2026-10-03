#include <stdio.h>
int main() {
    int Quantity;
    printf("Quantity in KG: ");
    scanf("%d", &Quantity);

    float GrossBill = Quantity * 65;
    float Discount;
    float FinalBill;

    if (GrossBill <= 1000)
        Discount = 0;

    else if (GrossBill <= 1500)
        Discount = GrossBill * 0.10;

    else if (GrossBill <= 2000)
        Discount = GrossBill * 0.15;

    else
        Discount = GrossBill * 0.20;

    FinalBill = GrossBill - Discount;

    printf("Gross Bill: %.2f\nDiscount: %.2f\nFinal Bill: %.2f\n", GrossBill, Discount, FinalBill);

    return 0;
}