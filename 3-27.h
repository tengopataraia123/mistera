#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int inputYear;
   
   scanf("%d", &inputYear);
   /* Type your code here. */
   
   if((inputYear % 100 == 0 && inputYear % 400 == 0) || (inputYear%100 != 0 && inputYear%100%4 == 0)){
      printf("%d is a leap year.\n",inputYear);
   }else{
      printf("%d is not a leap year.\n",inputYear);
   }
   

   return 0;
}
