#include <stdio.h>

int main(void) {
   char origLetter;

   scanf(" %c", &origLetter);

   /* Your solution goes here  */

   switch(origLetter){
      case 'a':
      case 'A':
         printf("Alpha\n");
         break;
      case 'b':
      case 'B':
         printf("Beta\n");
         break;
      default:
         printf("Unknown\n");
   }
   

   return 0;
}
