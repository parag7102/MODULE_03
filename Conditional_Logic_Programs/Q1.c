//1. Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;

    printf("\n Enter the num1 :");
    scanf("%d",&a);

    printf("\n Enter the num2:");
    scanf("%d",&b);

    if(a==b)
    {
        printf("\n both number are equal",a,b);
    }
    else{
        printf("\n both number are not equal",a,b);
    }
}