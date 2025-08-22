#include <stdio.h>
int main()
{
    int i, sum = 0;
    for(;;) {
        printf("Enter a number: ");
        scanf("%d",&i);
        if (i == 0){
            break;
        }
    sum += i;
    }
    printf("Result: %d\n", sum);
    
    return 0;
}