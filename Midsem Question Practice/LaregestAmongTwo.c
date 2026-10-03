#include <stdio.h>
int main ()
{ 
	int a, b;
	printf ("Enter the first Number: "); scanf ("%d", &a);
	printf ("Enter the second Number: "); scanf ("%d", &b);
	
	if ( a > b ) 
	printf ("first number %d is laregest", a);
	
	else if ( a == b ) 
	printf ("both the numbers are equal");
	
	else 
	printf ("second number %d is largest", b);
	
	return 0;
}
