#include <stdio.h>
int main () {

int a, b, c ;  // Taking Integers Input

printf ("Enter the 1st value: ");
scanf ("%d", &a);

printf ("Enter the 2nd value: ");
scanf ("%d", &b);

printf ("Enter the 3rd value: ");
scanf ("%d", &c);

float sum = (float) a + (float) b + (float) c;
printf("sum of the given numbers is %.2f\n", sum);

float average = ((float) a + (float) b + (float) c) / 3;
printf ("Average of the given numbers is %.2f\n", average );

return 0;
}
