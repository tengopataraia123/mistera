#include <stdio.h>

int main(void) {

   /* Type your code here. */
   
   int color[] = {0,0,0};
   int smallest = 255;
   
   scanf("%d %d %d",&color[0],&color[1],&color[2]);
   
   for(int i=0;i<3;i+=1){
      if(color[i]<smallest){
         smallest = color[i];
      }
   }
   
   printf("%d %d %d\n",color[0]-smallest,color[1]-smallest,color[2]-smallest);

   return 0;
}
