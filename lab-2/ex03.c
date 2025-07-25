#include<stdio.h>
int main()
{   
    char name[100];
    int age;
    float height;
    int weight;
    char gender;
    char education[100];


    printf("Enter your Name: ");
    scanf(" %[^\n]",name);
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter your weight: ");
    scanf("%d",&weight);
    printf("Enter your gender: ");
    scanf(" %c",&gender);
    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]",education);

    printf("Name :%s\nAge :%d\nHeight :%.1f\nWeight :%d\n Gender :%c\nEducation Qualification :%s\n :",name,age,height,weight,gender,education);
    return 0;
}