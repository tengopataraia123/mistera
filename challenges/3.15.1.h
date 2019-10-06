#include <stdio.h>
#include <string.h>

int main(void) {
   char condStr[50];
   int userVal;

   scanf("%d", &userVal);

   strcpy(condStr, (userVal < 0)?"negative":"non-negative"/* Your solution goes here  */);

   printf("%d is %s.\n", userVal, condStr);

   return 0;
}
