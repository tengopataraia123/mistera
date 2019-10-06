#include <stdio.h>
#include <stdbool.h>

int main(void) {
   bool isTeenager;
   int kidAge;

   scanf("%d", &kidAge);

   /* Your solution goes here  */
   
   isTeenager = (kidAge >=13 && kidAge <= 19);

   if (isTeenager) {
      printf("Teen\n");
   }
   else {
      printf("Not teen\n");
   }

   return 0;
}
