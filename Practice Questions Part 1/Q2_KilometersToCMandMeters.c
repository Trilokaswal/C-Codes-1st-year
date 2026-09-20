#include <stdio.h>
int main () { 
	
	float D;
	printf("Enter value of Distance in KM: ");
	scanf("%f", &D);
	
	
	printf("Distance in Meters is %f\n", D*1000); 
	printf("Disance in Cetimeters is %f\n", D*100000);
	
	return 0;
}
