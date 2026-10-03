#include <stdio.h>
int main ()
{
	int DAYS;
	
	printf ("Enter Number of Days: ");
	scanf  ("%d", &DAYS);
	
	printf ("%02d Years : %02d Months : %02d Days", 
	        DAYS/365, 
           (DAYS%365)/30,
            DAYS%30);

	return 0;  
}
