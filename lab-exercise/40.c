#include <stdio.h>
int main()
{   
    int num,total;
    printf("Enter your number: ");
    scanf("%d",&num);
    
    printf("Multiplication table\n");

    for(int i = 1; i <= 12; i++) {
        total = i * num;
        printf("%d * %d = %d\n", num, i, total);
    }
    return 0;
}