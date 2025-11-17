//Q85: Reverse a string.
#include <stdio.h>
int main(){
    char str[100] , rev[100];
    int length = 0 , i = 0 , j = 0;

    printf("Enter a string: ");
    scanf("%s" , str);

    while ( str[length] != 0){
        length ++;
    }

    for ( i = length -1 ; i >= 0; i--){
        rev[j] = str[i];
        j++;
    }
    printf("Reversed string = %s" , rev );
    return 0;
}