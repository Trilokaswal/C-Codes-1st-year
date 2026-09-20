#include <stdio.h>
int main () {
	int Previous, Current;
	
	printf ("Previous Electricity Readings: ");
	scanf ("%d", &Previous);
	
	printf ("Current Electricity Readings: ");
	scanf ("%d", &Current);
	
	int UC = Current - Previous;
	printf ("Total Units consumed = %d\n", UC);
	return 0;
}
