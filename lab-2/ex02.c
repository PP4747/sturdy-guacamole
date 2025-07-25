#include<stdio.h>
int main()
{   
    int time;
    int hours;
    int minutes;

    printf("Enter total minutes: ");
    scanf("%d",&time);

    hours= time/60;
    minutes= time%60;

    printf("%d minutes is %d hours and %d minutes:",time,hours,minutes );
    return 0;
}
    