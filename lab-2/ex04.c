#include<stdio.h>
int main()
{   
    char name[50];
    int ID;
    int Pro;
    float Phys;
    float Cal;
    printf("Enter your name: ");
    scanf("%[^\n]",name);
    printf("Enter your student ID: ");
    scanf("%d",&ID);
    printf("Enter your Programming score: ");
    scanf("%d",&Pro);
    printf("Enter you Physics score: ");
    scanf("%f",& Phys);
    printf("Enter you Calculus score: ");
    scanf("%f",& Cal);

    printf("Hi %s(%d)! Your GPA is %.2f.):", name, ID, (Pro+Phys+Cal)/3);
    return 0;
}