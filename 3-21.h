#include <stdio.h>
#include <string.h>
// FIXME include the string library

#define OIL_CHANGE 35
#define TIRE_ROTATION 19
#define CAR_WASH 7

int checkService(char * service){
   if(strcmp(service,"Oil change") == 0){
      return OIL_CHANGE;
   }else if(strcmp(service,"Tire rotation") == 0){
      return TIRE_ROTATION;
   }else if(strcmp(service,"Car wash") == 0){
      return CAR_WASH;
   }else{
      return -1;
   }
}

int main(void) {

   /* Type your code here. */
   
   char service[20];
   int price = 0;
   
   printf("Enter desired auto service:\n");
   scanf("%[^\n]",service);
   
   price = checkService(service);
   
   if(price < 0){
      printf("You entered: %s\n",service);
      printf("Error: Requested service is not recognized\n");
   }else{
      printf("You entered: %s\n",service);
      service[0] += 32;                            //conver first letter into lowercase
      printf("Cost of %s: $%d\n",service,price);
   }
   

   return 0;
}
