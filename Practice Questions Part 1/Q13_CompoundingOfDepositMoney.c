#include <stdio.h>
#include <math.h>
int main () {
	float P;
	printf ("Enter the Monthly deposit to put in: ");
	scanf ("%f", &P);
	
	float annualRate;
	printf ("Enter the Rate of Interest: ");
	scanf ("%f", &annualRate);
	
	int years;
	printf ("Enter time (in years): ");
	scanf ("%d",&years);
    
    float i = (annualRate / 100) / 12; //Annual Rate into Monthly Rate
    
    int n = years * 12; // years into months conversion 
    
    float FV = P * (pow(1+i, n) - 1) / i;
    printf ("The Future Value is: %.2f\n", FV);

return 0;

}
