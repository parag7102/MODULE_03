// 10. WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("\n Enter a Number:");
    scanf("%d",&num);
    if(num>0){
                printf("\n This number is positive number");
            }
            else if(num<0){
                            printf("\n This Number is Negative Number");
                        }
            else{
                printf("\n This Number is Zero");
            }
    return 0;
}