#include <stdio.h>
#include <math.h> // For pow() function
int main() {
   float p, n, r, si, ci;
   // Input principal amount, time, and rate
   printf("Enter principal amount (P): ");
   scanf("%f", &p);
   printf("Enter time in years (n): ");
   scanf("%f", &n);
   printf("Enter rate of interest (r): ");
   scanf("%f", &r);
   // Calculate Simple Interest
   si = (p * n * r) / 100;
   // Calculate Compound Interest
   ci = p * (pow((1 + r / 100), n) - 1);
   // Display results
   printf("Simple Interest = %.2f\n", si);
   printf("Compound Interest = %.2f\n", ci);
   return 0;
}