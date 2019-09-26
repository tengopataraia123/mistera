#include <stdio.h>
#include <string.h>
// FIXME include the string library

#define tireRotation  19
#define oilChange 35
#define carWash 7
#define carWax 12

int check(char * object,char * move){
   if(strcmp(object,"Oil")==0 && strcmp(move,"change")==0){
      return oilChange;
   }else if(strcmp(object,"Car")==0 && strcmp(move,"wax")==0){
      return carWax;
   }else if(strcmp(object,"Car")==0 && strcmp(move,"wash")==0){
      return carWash;
   }else if(strcmp(object,"Tire")==0 && strcmp(move,"rotation")==0){
      return tireRotation;
   }else{
      return 0;
   }
      
      
   return 0;
}

int main(void) {
   int price1 =0;
   int price2 =0;
   
   char object1[10],move1[10];
   char object2[10],move2[10];

   /* Type your code here. */
   
   printf("Davy's auto shop services\n");
   printf("Oil change -- $%d\n",oilChange);
   printf("Tire rotation -- $%d\n",tireRotation);
   printf("Car wash -- $%d\n",carWash);
   printf("Car wax -- $%d\n",carWax);
   
   printf("\n");
   
   printf("Select first service:\n");
   scanf("%s",object1);
   if(object1[0] != '-'){
      scanf("%s",move1);
   }
   printf("Select second service:\n");
   scanf("%s",object2);
   if(object2[0] != '-'){
      scanf("%s",move2);
   }
   
   price1 = check(object1,move1);
   price2 = check(object2,move2);
   
   printf("\n");
   
   printf("Davy's auto shop invoice\n");
   
   printf("\n");
   
   if(price1 == 0){
      printf("Service 1: No service\n");
   }else{
       printf("Service 1: %s %s, $%d\n",object1,move1,price1);
   }
   if(price2 == 0){
      printf("Service 2: No service\n");
   }else{
      printf("Service 2: %s %s, $%d\n",object2,move2,price2);
   }
   
   printf("\n");
   
   printf("Total: $%d\n",price1+price2);

   return 0;
}
