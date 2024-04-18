//7. Area of Rectangle
#include <stdio.h>
int main(){
            int height,width,area;    
    
            printf("\n Enter Height:");
            scanf("%d",&height);

            printf("\n Enter Width:");
            scanf("%d",&width);
            
            area=width*height;
            printf("Area of the rectangle = %d",area);

            return 0;
}