//Q83: Count vowels and consonants in a string.
#include <stdio.h>
int main(){
    char str[100];
    int i = 0 , vow = 0 , con = 0;

    printf("Enter a string: ");
    scanf("%s" , str);

    while ( str[i] != 0){
        char ch = str[i];

        if (( ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <= 'Z')){

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                    vow++;
        }
    
    else {
        con++;
    }
    }
    i++;
}
    printf("Vowels=%d \n Consonants=%d\n", vow, con);
    return 0;
}