#include <stdio.h>
int main () {
   
   int Quantity, Price, TaxRate;
   
   printf ("Number of items: ");
   scanf ("%d", &Quantity);
   
   printf ("price of each item: ");
   scanf ("%d", &Price);
   
   printf ("GST Rate: ");
   scanf ("%d", &TaxRate);
   
    float Subtotal = (float)Quantity * (float)Price;
    printf ("Subtotal= %.2f Rupees\n", Subtotal);
     
    float GST = ((float)Subtotal * (float)TaxRate)/100.00;
    printf ("GST = %.2f Rupees\n", GST);
    
    float Total = Subtotal + GST;
    printf ("Total = %.2f Rupees\n", Total);
    
    return 0;
}
