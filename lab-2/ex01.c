#include<stdio.h>
int main()
{   
    int intpoint;
    float floatpoint;
    char charpoint;

    printf("Please enter an integer value: ");
    scanf("%d",&intpoint);
    printf("Please enter an float value: ");
    scanf("%f",&floatpoint);
    printf("Please enter a character: ");
    scanf(" %c",&charpoint);

    printf("You entered :%d\nYou entered :%.1f\nYou entered :%c :",intpoint,floatpoint,charpoint);
    return 0;
}
    