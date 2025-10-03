//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main (){
    char n;
    printf("enter an alphabet or character:  ");
    scanf("%c",&n);

    if( n>='A' && n<='Z'){
        printf("this is an uppercase alphabet");   
    }
    else if (n>='a' && n<='z'){
        printf("this is a lowercase alphabet");
    }
    else if (n>='0' && n<= '9'){
        printf(" this is a digit");
    }
    else {
        printf("this is a special character");
    }
    return 0;
}
