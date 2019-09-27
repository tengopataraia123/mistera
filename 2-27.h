#include <stdio.h>
#include <math.h>

#define HALF 6

int main(void) {
   double caffeineMg;  // "double" supports floating-point like 75.5, versus int for integers like 75.
   
   scanf("%lf", &caffeineMg);

   /* Type your code here. */
   
   for(int i=1;i<=3;i+=1){
      printf("After %d hours: %.2f mg\n",HALF*i,caffeineMg/pow(2,i));
   }
   return 0;
}
