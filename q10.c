//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main (){
    int seconds,m,h,s;
    printf("enter time in seconds: ");
    scanf("%d",&s);
    
    h= s/3600;
    m=(s%3600)/60;
    seconds=s%60;
    printf(" %d:%d:%d", h,m,seconds);

    return 0;
}


