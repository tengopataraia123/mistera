#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int userNum;
   bool isPositive;
   bool isEven;

   scanf("%d", &userNum);
   isPositive = (userNum > 0);
   isEven = ((userNum % 2) == 0);

   /* Your solution goes here  */
   
   if(isEven && isPositive){
      printf("Positive even number");
   }else if(!isEven && isPositive){
      printf("Positive number");
   }else{
      printf("Not a positive number");
   }
   
   printf("\n");

   return 0;
}
