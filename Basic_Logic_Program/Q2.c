// 2. Write a program to make Simple calculator.
#include<stdio.h>
#include<conio.h>
int main(){
    int sub1,sub2,result;
    printf("\n Enter Subject 1:");
    scanf("%d",& sub1);
    
    printf("\n Enter Subject 2:");
    scanf("%d",& sub2);
    
    result= sub1 + sub2;
    printf("\n Additon:%d",result);
    
    result= sub1 - sub2;
    printf("\n Subtraction:%d",result);
                                    
    result= sub1 * sub2;
    printf("\n Multiplication:%d",result);
        
    result= sub1 / sub2;
    printf("\n Division:%d",result);
                    
    result= sub1 % sub2;
    printf("\n Modulo:%d",result);
                    
    return 0;
}