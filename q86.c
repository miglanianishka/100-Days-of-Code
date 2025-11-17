//Q86: Check if a string is a palindrome.
#include <stdio.h>
int main(){
    char str[100] , rev[100];
    int length = 0 , i = 0 , j = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%s" , str);

    while ( str[length] != 0){
        length ++;
    }

    for ( i = length -1 ; i >= 0; i--){
        rev[j] = str[i];
        j++;
    }
     for (i = 0; i < length; i++) {
        if (str[i] != rev[i]) {
            palindrome = 0;}
        }    
   if ( palindrome == 1){
    printf (" string is palindrome" , str);
   }
   else 
    printf (" string is not palindrome", str);
    return 0;
}