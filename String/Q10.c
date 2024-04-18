//10. Write a program in C to extract a substring from a given string
#include <stdio.h>

void substring(char s[], char sub[], int p, int l) {
   int c = 0;
 
   while (c < l) {
      sub[c] = s[p+c-1];
      c++;
   }
   sub[c] = '\0';
}

int main() {
   char string[100], sub[100];
   int position, length;

   printf("Enter a string: ");
   fgets(string, sizeof(string), stdin);  

   printf("Enter the position and length of substring: ");
   scanf("%d %d", &position, &length);

   substring(string, sub, position, length);

   printf("The substring is: %s\n", sub);

   return 0;
}
