#include <stdio.h>
#include <math.h>

int main () {

float R;
printf ("Radius of Circle = ");
scanf ("%f", &R);

float Area = 3.14159 * pow(R, 2);
printf ("%.2f\n", Area);

float Circumference = 2 * 3.14159* R;
printf ("%.2f\n", Circumference);

return 0;
}
