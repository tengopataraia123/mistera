#include <stdio.h>

int main(void) {
   int nextChoice;

   scanf("%d", &nextChoice);

   /* Your solution goes here  */
    switch(nextChoice){
       case 0:
         printf("Rock\n");
         break;
      case 1:
         printf("Paper\n");
         break;
      case 2:
         printf("Scissors\n");
         break;
      default:
         printf("Unknown\n");
    }

   return 0;
}
