#include<stdio.h>

int main()
{
    //QUESTION 3
    int radius;
    printf("Enter radius of circle\n");
    scanf("%d",&radius);
    float area= 3.14*radius*radius;
    float circumference=2*3.14*radius;
   
    printf("The area of circle is %f\n",area);
    printf("The circumference of circle is %f\n",circumference);
    
}