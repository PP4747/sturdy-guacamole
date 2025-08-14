#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(x < 1 || x > 100) {
        printf("%d is out of range", x);
    } else {
        if(x % 2 == 0) {
     printf("%d is even\n", x);
    } else {
     printf("%d is odd\n", x);
    }
}
    return 0; 
}