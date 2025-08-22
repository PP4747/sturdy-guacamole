#include <stdio.h>
int main()
{   
    printf("Decimal    ASCII\n");
    for(int i = 33; i <= 55; i++) {
        printf("%d  %c\n",i ,i);
    }

    return 0;
}