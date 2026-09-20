#include <stdio.h>
int main () {
	float speed;
	printf ("Speed in KM/H = ");
	scanf("%f", &speed);
	
	int HR, MIN;
	printf ( "Time in Hours & Minutes = ");
	scanf ("%d %d", &HR, &MIN);
	
	float Distance = speed * ((float)HR + ((float)MIN/60.00));
	printf ("Distance in KM is: %f\n", Distance);
	
	return 0;
} 
