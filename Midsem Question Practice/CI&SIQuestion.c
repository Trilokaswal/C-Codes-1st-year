#include<stdio.h>
#include<math.h>
int main() {
float p, r, n, SI, CI;
printf("Enter Principal: ");
scanf("%f", &p);
printf("Enter Rate of Interest: ");
scanf("%f", &r);
printf("Enter Time in years: ");
scanf("%f", &n);
SI = (p * n * r) / 100;
CI = p * pow(1 + r / 100, n) - p;
printf("Simple Interest: %.2f\n", SI);
printf("Compound Interest: %.2f\n", CI);
return 0; }
