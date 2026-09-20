#include <stdio.h>
int main () { 

float Price, DR;

printf ("Enter the Price: ");
scanf ("%f", &Price);

printf ("Enter the rate of discount: ");
scanf ("%f", &DR);

float DA = (Price*DR)/100;
printf ("Discounted amount is %.2f\n", DA);

float FA = Price - DA ;
printf ("Final amount is %.2f\n", FA);

return 0;
}
