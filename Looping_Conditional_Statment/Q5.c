//5. WAP< to print factorial of given number
#include<stdio.h>
#include<conio.h>
int main(){
    int i,fact=1,num;
    printf("\n Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("factorial of is %d Number",fact);
    return 0;
}