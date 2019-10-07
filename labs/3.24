#include <stdio.h>

char * direction(int highwayNumber){
   if(highwayNumber%2 == 0){
      return "going east/west";
   }else{
      return "going north/south";
   }
}

int main(void) {
   int highwayNumber;
   
   scanf("%d", &highwayNumber); 
   /* Type your code here. */
   
   if(0<highwayNumber && highwayNumber<100){
      printf("The %d is primary, %s.\n",highwayNumber,direction(highwayNumber));
   }else if(99<highwayNumber && highwayNumber<1000){
      printf("The %d is auxiliary, serving the %d, %s.\n",highwayNumber,highwayNumber%100,direction(highwayNumber));
   }else{
      printf("%d is not a valid interstate highway number.\n",highwayNumber);
   }

   return 0;
}
