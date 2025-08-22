#include <stdio.h>
int main()
{
    int value[5];
    int sum;
    int highest;

    for(int i = 0; i < 5; i++) {
        printf("Enter the mark of student %d: ", i+1);
        scanf("%d",&value[i]);

        sum += value[i];
        if (value[i] > highest) { 
            highest = value[i];
        }
    }

    printf("Total Marks : %d\n", sum);
    printf("Highest Marks: %d\n", highest);

    return 0;
}
 
