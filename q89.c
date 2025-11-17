//Q89: Count frequency of a given character in a string.
#include <stdio.h>
int main(){
    char str[100] , c;
    int i = 0 , count = 0;

    printf("Enter a string: ");
    scanf("%s", &str);  

    printf("Enter the character to count: ");
    scanf(" %c", &c);

    while ( str[i] != 0){
            if ( str[i] == c){
                count++;
            }      
        i++;
    }
    printf ("Frequency: %d\n" , count);
    return 0;
}