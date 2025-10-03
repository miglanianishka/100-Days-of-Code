#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
if (n<0){
   printf("Invalid",n);}
else if ( n==2 || n==3){
    printf("It is a prime number\n", n);
}   
else if ( n%2 != 0){
    for(int i = 2; i*i<= n;i++){
        printf("It is a prime number\n",n);
    }
}    
return 0;
}