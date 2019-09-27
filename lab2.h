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
