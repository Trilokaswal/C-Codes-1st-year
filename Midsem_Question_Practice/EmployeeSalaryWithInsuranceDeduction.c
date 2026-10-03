#include <stdio.h>
int main () { 
   float GS;
   printf ("Enter Gross Pay: ");
   scanf  ("%f", &GS);
   
   if (GS <= 10000)
   printf ("Insuarance is %.2f\nBalance Salary is %.2f", GS*0.05, GS - GS*0.05);

   else if (10000 < GS && GS <= 25000)
   printf ("Insuarance: %.2f\nBalance Salary: %.2f", GS*0.07, GS - GS*0.07);
   
   else if (25000 < GS && GS <= 50000)
   printf ("Insuarance: %.2f\nBalance Salary: %.2f", GS*0.1, GS - GS*0.1);
   
   else
   printf ("Insuarance: %.2f\nBalance Salary: %.2f", GS*0.12, GS - GS*0.12);

   return 0;}