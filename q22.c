//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main (){
    int cp,sp;
    printf("Enter the cost price and selling price");
    scanf("%d  %d", &cp , &sp);

    int profit_perc= ((sp-cp)*100)/cp ;
    int loss_perc= ((cp-sp)*100)/cp;
    
    if(sp>cp)
    printf("profit:%d",profit_perc,sp,cp);
    else if ( cp>sp)
    printf("loss:%d",loss_perc,sp,cp);
    return 0;
}

