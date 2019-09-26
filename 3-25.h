#include <stdio.h>
#include <string.h>

const char * MONTHS[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};   

int dayCount(char * month,int day){
   for(int i=0;i<12;i+=1){
      if(strcmp(month,MONTHS[i]) == 0){
         if(i == 1 && day > 0 && day < 28){
            return 31+day;
         }else if(i%2 == 0 && day > 0 && day < 32){
            return i/2*31+28+(i/2-1)*30+day;
         }else if(i%2 == 1 && day >0 && day < 31){
            return (i+1)/2*31+28+(i/2-1)*30+day;
         }
      }
   }
   
   return -1;
}
         
         
char * season(int date){
   
   if(0 < date && date <= 78){
      return "winter";
   }else if(78 < date && date <= 170){
      return "spring";
   }else if(170 < date && date <= 265){
      return "summer";
   }else if(265 < date && date <= 354){
      return "autumn";
   }else{
      return "winter";
   }
}

int main(void) {
   char inputMonth[50];
   int inputDay;
   int date = 0;
   
   scanf("%s", inputMonth); 
   scanf("%d", &inputDay); 
   
   /* Type your code here. */
   
   date = dayCount(inputMonth,inputDay);
   if(date == -1){
      printf("invalid\n");
   }else{
      printf("%s\n",season(date));
   }
   
   return 0;
}
