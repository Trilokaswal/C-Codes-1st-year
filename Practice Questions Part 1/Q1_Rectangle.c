#include <stdio.h>
int main () {

float l;
float b;

printf("Enter the value of Length: ");
scanf("%f", &l);

printf("Enter the value of breadth: ");
scanf ("%f", &b);

float Area = l * b ;
printf ("The Area is %.2f\n ", Area);

float Perimeter = 2 * ( l + b );
printf ("The Perimeter is %.2f\n ", Perimeter);

return 0;
}
