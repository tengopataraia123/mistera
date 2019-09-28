#include <stdio.h>

int main(){
  char redId[20];
  
  scanf("%s",redId);
  
  int i =0;
  while(redId[i] != '\0'){
    printf("%c\n",redId[i]);
    i+=1;
    }
   
  return 0;
}

// Version 2.0 more apropriate for class

int main(){
  int redId =0;
  
  scanf("%d",&redId);
  
  printf("%d\n",redId/100000000);
  redId %= 100000000;
  printf("%d\n",redId/10000000);
  redId %= 10000000;
  printf("%d\n",redId/1000000);
  redId %= 1000000;
  printf("%d\n",redId/100000);
  redId %= 100000;
  printf("%d\n",redId/10000);
  redId %= 10000;
  printf("%d\n",redId/1000);
  redId %= 1000;
  printf("%d\n",redId/100);
  redId %= 100;
  printf("%d\n",redId/10);
  redId %= 10;
  printf("%d\n",redId);
  
  return 0;
}
