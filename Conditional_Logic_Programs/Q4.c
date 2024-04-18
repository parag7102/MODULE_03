/* 4. WAP to make simple calculator 
    (operation include Addition, Subtraction, Multiplication, Division, modulo) 
    using conditional statement)*/
#include <stdio.h>  
int main()  
{  
    char operator;  
    int n1, n2;   
    float result;  
    printf ("\n Choose an operator(+, -, *, /) ");  
    scanf ("%c", &operator);  
   if (operator =='%'){
        if(n2!=0){
            result= n1%n2;
            printf("\n %d  %d = %d", n1,n2);
        }
        else{
            printf("\n Error modulo zero not allowed");
        }
   }
    else if (operator == '/' )  
    {  
        printf (" You have selected: Division");  
    }  
    else if (operator == '*')  
    {  
        printf (" You have selected: Multiplication");  
     }  
       
    else if (operator == '-')  
    {  
        printf (" You have selected: Subtraction");  
     }  
        else if (operator == '+')  
    {  
        printf (" You have selected: Addition");  
     }     
    printf (" \n Enter the first number: ");  
    scanf(" %d", &n1);   
    printf (" Enter the second number: ");  
    scanf (" %d", &n2);   
      
    switch(operator)  
    {  
        case '+':  
            result= n1 + n2;  
            printf (" Addition of %d and %d is: %f", n1, n2, result);  
            break;  
          
        case '-':  
            result = n1 - n2;   
            printf (" Subtraction of %d and %d is: %f", n1, n2, result);  
            break;  
              
        case '*':  
            result = n1 * n2;   
            printf (" Multiplication of %d and %d is: %f", n1, n2, result);  
            break;            
          
        case '/':  
            if (n2 == 0)     
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);        
                }  
            result = n1 / n2;   
            printf (" Division of %d and %d is: %f", n1, n2, result);  
            break;  
        default:    
            printf (" Invalid choice please try again ");               
    }  
    return 0;  
}  