#include <stdio.h>
#include <math.h>

int main () {
    int x1, x2, y1, y2;
    float distance;

    printf ("Value of x1: "); scanf  ("%d", &x1);
     
    printf ("Value of y1: "); scanf  ("%d", &y1);
    
    printf ("Value of x2: "); scanf  ("%d", &x2);
    
    printf ("Value of y2: "); scanf  ("%d", &y2);
    
    distance = sqrt ( pow ((x2 - x1), 2) +  pow ((y2 - y1), 2) );
    printf ("%.2f", distance);
    
return 0;

}