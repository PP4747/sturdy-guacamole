#include<stdio.h>
int main()
{   
    char name[20];
    int age;
    float height;
    char uni[20];
    printf("Enter your full name: ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your heght: ");
    scanf("%f",&height);
    printf("Enter you University name: ");
    scanf("%[^\n]", uni);

    printf("Hi! Everyone. This is K.%s from %s. I am %d years old and my height is %.1f cm tall.):", name, uni, age, height);
    return 0;
}

    