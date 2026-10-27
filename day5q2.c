#include<stdio.h>

int main()
{
    int totalSeconds,hours,minutes,seconds;
    print("Enter time in seconds : \n");
    scanf("%d",&totalSeconds);
    hours= totalSeconds/3600;
    minutes= (totalSeconds % 3600)/60;
    seconds=totalSeconds %60;

    printf("Time = %02d :%02d :%02d\n",hours,minutes,seconds);
    return 0;

}