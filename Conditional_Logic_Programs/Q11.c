// 11. WAP to find number is even or odd using ternary operator
#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("\n Enter the number:");
    scanf("%d",&num);
    if(num%2==0){
        printf("\n This Number %d is Even Number",num);
    }
    else{
        printf("\n This Number  is Odd Number");
    }
}