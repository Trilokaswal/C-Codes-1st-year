#include <stdio.h>
int main (){
	int A, B, Swap;
	
	printf ("Enter the value of first integer A: ");
	scanf ("%d", &A);
	
	printf ("Enter the value of second integer B: ");
	scanf ("%d", &B);
	
	
	Swap = A;
	A = B;
	B = Swap;
	
	printf (" A = %d\n", A);
	printf (" B = %d\n", B);
	
	return 0;
}
	
