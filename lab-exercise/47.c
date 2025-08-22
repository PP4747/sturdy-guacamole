#include <stdio.h>
int main()
{   
    char letter;
    int vowel = 0, not_vowel = 0;
    
    printf("Enter your lower case characters: ");
    
        for(int i = 1; i <= 10; i++) {
        scanf("%c",&letter); 
            if(letter == 'a'||letter == 'e'||letter == 'i'||letter == 'o'||letter == 'u') {
         vowel++;
            }
            else{
        not_vowel++;
            }
        }
    printf("Number of vowel is %d\n", vowel);
    printf("Number of not vowel is %d\n", not_vowel);
        
    return 0;
}