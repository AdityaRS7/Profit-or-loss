#include<stdio.h>
int main(){
    float cp,sp;
    printf("enter cost price");
    scanf("%f",&cp);
    printf("enter selling price");
    scanf("%f",&sp);
    if(sp>cp)
        printf("profit");
    else if(cp>sp)
        printf("loss");
    else
        printf("neither profit nor loss");
    return 0;
}
