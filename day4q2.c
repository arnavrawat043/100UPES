#include<stdio.h>

int main()
{
    int n,i,sum=0;
    print("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i; 
    }
    printf("The sum of first %d natural numbers = %d",n,sum);
    return 0;

}