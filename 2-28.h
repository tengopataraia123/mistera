#include <stdio.h>

float milesPerGallon,dollarsPerGallon;

float price(float x){
   return x/milesPerGallon*dollarsPerGallon;
}

int main(void) {

   /* Type your code here. */
   
   scanf("%f %f",&milesPerGallon,&dollarsPerGallon);
   
   printf("%.2f %.2f %.2f\n",price(10.0),price(50.0),price(400.0));

   return 0;
}
