#include <stdio.h>
int main()
{
    int value[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;

    for(int i = size; i > 0; i--){
        printf("%d ", value[i - 1]);
    }
    return 0;
}