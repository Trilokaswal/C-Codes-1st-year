#include <stdio.h>
int main (){
	
	int A, B, C, D, E;
	
	printf ("Marks obtained in subject A: ");
	scanf ("%d", &A);
	
	printf ("Marks obtained in subject B: ");
	scanf ("%d", &B);
	
	printf ("Marks obtained in subject C: ");
	scanf ("%d", &C);
	
	printf ("Marks obtained in subject D: ");
	scanf ("%d", &D);
	
	printf ("Marks obtained in subject E: ");
	scanf ("%d", &E);
	
	int Max;
	printf ("Maximum Marks = ");
	scanf ("%d",&Max);
	
	int Total = A + B + C + D + E;
	
	float Percentage = ( (float)Total / (float)Max ) * 100.00;
	printf ("Marks Percentage is %.2f\n", Percentage);
	
	return 0;
}
	
