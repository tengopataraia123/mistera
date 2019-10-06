#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
   char passCode[3];

   scanf("%s", passCode);

   /* Your solution goes here  */
   
   if(isalpha(passCode[0]))   passCode[0] = '_';
   if(isalpha(passCode[1]))   passCode[1] = '_';

   printf("%s\n", passCode);
   return 0;
}
