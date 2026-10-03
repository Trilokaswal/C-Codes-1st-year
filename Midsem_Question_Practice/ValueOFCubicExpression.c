#include <stdio.h>
#include <math.h>
int main () 
{
	int a, b, c, d, x;
	float y;
	
	printf ("Enter the value of a: "); scanf ("%d", &a);
    printf ("Enter the value of b: "); scanf ("%d", &b);
    printf ("Enter the value of c: "); scanf ("%d", &c);
    printf ("Enter the value of d: "); scanf ("%d", &d);
    printf ("Enter the value of x: "); scanf ("%d", &x);
 
    y = a * pow (x,3) + b * pow (x,2) + c*x + d; 
    printf ("y = %.2f", y);
    
    return 0 ;
}
