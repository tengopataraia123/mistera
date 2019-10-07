#include <stdio.h>

int main(void) {

   /* Type your code here. */
   int change =0;
   
   scanf("%d",&change);
   
   if(!change){
      printf("no change\n");
   } 
   if(change / 100){
      if(change/100>1){
         printf("%d dollars\n",change/100);
      }else{
         printf("%d dollar\n",change/100);
      }
      change %= 100;
   }
   if(change / 25){
      if(change/25>1){
         printf("%d quarters\n",change/25);
      }else{
         printf("%d quarter\n",change/25);
      }
      change %= 25;
   } 
   if(change/10){
      if(change/10>1){
         printf("%d dimes\n",change/10);
      }else{
         printf("%d dime\n",change/10);
      }
      change %= 10;
   } 
   if(change/5){
      if(change/5>1){
         printf("%d nickels\n",change/5);
      }else{
         printf("%d nickel\n",change/5);
      }
      change %= 5;
   }
   if(change){
      if(change>1){
         printf("%d pennies\n",change);
      }else{
         printf("%d penny\n",change);
      }
   }
   return 0;
}
