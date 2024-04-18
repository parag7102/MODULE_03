// 10. find the area of a rectangular 
//     prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main(){
    int h,l,w,r,a;

    printf("\n Enter the length of rectangle:");
    scanf("%d",&l);

    printf("\n Enter the width of Rectangle:");
    scanf("%d",&w);

    printf("\n Enter the height of Rectangle:");
    scanf("%d",&h);

    a=2*(w*l+h*l+h*w);

    printf("\n Area of Rectangle:%d",a);

    return 0;


}