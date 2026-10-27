#include<stdio.h>

int main()
{
    //QUESTION 3
    int length,breadth;
    printf("Enter length and breadth\n");
    scanf("%d",&length);
    scanf("%d",&breadth);
    int area=length*breadth;
    int perimeter=2*(length+breadth);
    printf("The area of rectangle is %d\n",area);
    printf("The perimeter of rectangle is %d\n",perimeter);
    
}