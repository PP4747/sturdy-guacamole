#include <stdio.h>

int main() {
    char name[50];
    float cal; 
    float phy; 
    float prog;
    float avg;
    char grade;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your Calculus score: ");
    scanf("%f", &cal);

    printf("Enter your Physic score: ");
    scanf("%f", &phy);

    printf("Enter your Science score: ");
    scanf("%f", &prog);

    avg = (cal + phy + prog) / 3.0;

    if (avg >= 80) {
        grade = 'A';
    } else if (avg >= 70) {
        grade = 'B';
    }else if (avg >= 60) {
        grade = 'C';
    }else if (avg >= 50) {
        grade = 'D';
    }else {
        grade = 'F';
    }

        printf("%s, your average is %.2f. You got grade %c ", name, avg, grade);

    return 0;
}