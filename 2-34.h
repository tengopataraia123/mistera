#include <stdio.h>
#include <math.h>

int main(void) {

   /* Type your code here. Include the math library above first. */
   
   float frequency;
   
   scanf("%f",&frequency);
   
   for(float i=0;i<5;i+=1){
      if(i == 4.0){
         printf("%.2f\n",frequency*pow(2,i/12));
      }else{
      printf("%.2f ",frequency*pow(2,i/12));
      }
   }
   
   return 0;
}
