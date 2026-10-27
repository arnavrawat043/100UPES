#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    int sum=a+b;
    printf("The sum of a and b is %d\n",sum);

    int difference=a-b;
    printf("The difference of a and b is %d\n",difference);

    int product=a*b;
    printf("The product of a and b is %d\n",product);

    int quotient=a/b;
    printf("The quotient of a and b is %d\n",quotient);
    return 0;
    
}

