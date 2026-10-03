#include <stdio.h>
int main ()
{
    int num;
    printf ("Enter the num: ");
    scanf  ("%d", &num);
    
    if ( num % 5 == 0 && num % 11 == 0 ) 
    printf ("divisible by both 5 and 11");
    
    else printf ("not divisible by both 5 and 11");
    return 0;
}
