//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main (){
    char op;
    int a,b,result;

    printf("enter an operator(+,-, %% ,/,*): ");
    scanf("%c", &op);

    printf("enter two numbers: ");
    scanf("%d %d", &a , &b );

    switch (op) {
     case '+':
        result = a + b;
        printf(" %d + %d = %d\n", a,b,result);
        break;

    case '-':
        result = a - b;
        printf(" %d - %d = %d\n", a,b,result);
        break;

    case '*':
        result = a * b;
        printf(" %d * %d = %d\n", a,b,result);
        break;

    case '/':
        result = a / b;
        printf(" %d / %d = %d\n", a,b,result);
        break;

    case '%':
        result = a % b;
        printf(" %d %% %d = %d\n", a,b,result);
        break;

    }
 return 0;
}
