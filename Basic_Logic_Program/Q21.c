// 21. Accept 2 numbers from user and swap 2 numbers 
//     with using 3rd variable and without using 3rd variable.
#include<stdio.h>
int main() {
  int first, second, temp;
  printf("Enter first number: ");
  scanf("%d", &first);
  printf("Enter second number: ");
  scanf("%d", &second);

    temp = first; 
    first = second;
    second = temp;
    
  printf("\n After swapping, first number = %d", first);
  printf("\n After swapping, second number = %d", second);
  
  return 0;
}
