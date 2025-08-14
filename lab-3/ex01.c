#include<stdio.h>
int main()
{
    int x;
    int y;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a number: ");
    scanf("%d",&y);
    if(x==y){
        printf("Match");
    }
    else{
        printf("Does not match. Try again");
    }
    return 0;
}