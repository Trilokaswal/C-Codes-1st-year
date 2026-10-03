#include <stdio.h>
int main ()
{
	int year;
	printf ("Enter the number of years: ");
	scanf  ("%d", &year);
	
	if 
	( (  year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 )
	
	printf ("Leap year");
	
	else printf ("No Leap Year");
	
	return 0;
}	
	
	
