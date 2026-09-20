#include <stdio.h>
int main (){
	int amount;
	
	printf ("Enter amount: ");
	scanf ("%d", &amount);
	
	int NotesOf500 = amount /500;
	printf("%d x 500 rupees\n", NotesOf500);
	
	int NotesOf200 = (amount % 500)/200;
	printf("%d x 200 rupees\n", NotesOf200);
	
	int NotesOf100 = ((amount % 500)%200)/100;
	printf("%d x 100 rupees\n", NotesOf100);
	
	int NotesOf50 = (((amount % 500)%200)%100)/50;
	printf("%d x 50 rupees\n", NotesOf50);
	
	int NotesOf20 = ((((amount % 500)%200)%100)%50)/20;
	printf("%d x 20 rupees\n", NotesOf20);
	
	int NotesOf10 = (((((amount % 500)%200)%100)%50)%20)/10;
	printf("%d x 10 rupees\n", NotesOf10);
	
	int NotesOf5 = ((((((amount % 500)%200)%100)%50)%20)%10)/5;
	printf("%d x 5 rupees\n", NotesOf5);
	
	int NotesOf1 = (((((((amount % 500)%200)%100)%50)%20)%10)%5)/1;
	printf("%d x 1 rupees\n", NotesOf1);
	
	return 0;
}
