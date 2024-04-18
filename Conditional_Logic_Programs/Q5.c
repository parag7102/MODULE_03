// 5. Check Number Is Positive or Negative
#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("\n Enter a number:");
    scanf("%d",&num);
    if(num<0){
        printf("This number is negetive number \n",num);
    }
    if(num>1){
        printf("This number is positive number \n",num);
    }
}