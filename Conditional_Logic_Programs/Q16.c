#include<stdio.h>
#include<conio.h>
int main(){
            float temp;
            printf("Enter Tempreture in centimeter:");
            scanf("%f",&temp);
            if(temp<0){
                        printf("\n Freezing Wether");
                    }
            else if(temp<10){
                                printf("\n Very cold weather");
                            }
            else if(temp<20){
                                printf("\n cold wether");
                            }
            else if(temp<30){
                                printf("\n Normal Wether");
                            }
            else if(temp<40){
                                printf("Its hot wether");
                            }
            else{
                    printf("Its very Hot");
                }
    }