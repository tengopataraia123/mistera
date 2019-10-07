#include <stdio.h>

int main(void) {
   long long phoneNumber;
   /* Add more variables as needed */
   
   int lineNumber,areaCode,prefix;
   
   scanf("%lld",  &phoneNumber);
   /* Type your code here. */
   
   lineNumber = phoneNumber % 10000;
   phoneNumber /= 10000;
   prefix = phoneNumber % 1000;
   phoneNumber /= 1000;
   areaCode = phoneNumber %1000;
   
   printf("%d-%d-%d\n",areaCode,prefix,lineNumber);

   return 0;
}
