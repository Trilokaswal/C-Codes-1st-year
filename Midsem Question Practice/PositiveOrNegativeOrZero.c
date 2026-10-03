#include <stdio.h>
int main ()
{
	int Num;
	printf ("Enter an Integer: "); scanf ("%d", &Num);
	
	if (Num < 0) 
	printf ("Negative");
	
	else if ( Num == 0 ) 
	printf ("Zero");
	
	else
	printf ("Positive");
	
	return 0;
	
}
