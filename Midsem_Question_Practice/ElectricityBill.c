#include <stdio.h>
int main () {
    int Units;
    float Bill;

    printf ("Number of Units: ");
    scanf  ("%d", &Units);

    if (Units <= 100)
    Bill = Units * 2.00;

    else if (Units <= 200)
    Bill = 100 * 2.00 + (Units - 100) * 3.00;

    else 
    Bill = 100 * 2.00 + 100 *3.00 + (Units - 200) * 5.00;
    
    printf ("Total Bill: %.2f", Bill );
return 0;
 
}