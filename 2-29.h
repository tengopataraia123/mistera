#include <stdio.h>

int main(void) {

   /* Type your code here. */

   int age,weight,hearRate,userTime;
   
   scanf("%d %d %d %d",&age,&weight,&hearRate,&userTime);
   
   printf("Men: %.2f calories\n", ((age * 0.2017) - (weight * 0.09036) + (hearRate * 0.6309) - 55.0969 ) * userTime / 4.184);
   printf("Women: %.2f calories\n", ((age * 0.074) - (weight * 0.05741) + (hearRate * 0.4472) - 20.4022 ) * userTime / 4.184);

   return 0;
}
