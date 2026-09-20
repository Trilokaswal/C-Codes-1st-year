#include <stdio.h>
#include <math.h>
int main (){

int a, b;

printf ("First side a = ");
scanf ("%d", &a);

printf ("Second side b = ");
scanf ("%d", &b);

float Hypoteneuse= sqrt(pow(a, 2) + pow(b, 2));
printf ("Hypoteneuse = %.2f", Hypoteneuse);

return 0;
}
