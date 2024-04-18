// 9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main(){
    char ch;
    printf("\n Enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
                            printf("\n %c is Uppercase Letter",ch);
                        }
                        else if(ch>='a' && ch<='z'){
                                                       printf("\n %c is lowercase Letter",ch);
                                                }
                                                else if(ch>='0' && ch<=9){
                                                    printf("\n %c  is digit number",ch);
                                                }
                                                else{
                                                    printf("\n %c This Number is special number",ch);
                                                }
                                                return 0;

}