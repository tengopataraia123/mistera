#include <stdio.h>

int main(){
    int birthYear = 2000, birthMonth = 6, birthDay = 23;
    int currentYear = 2019, currentMonth = 9, currentDay = 28;

    int daysSinceBirth = 0;

    daysSinceBirth = (currentYear*365+currentMonth*30+currentDay)-(birthYear*365+birthMonth*30+birthDay);

    printf("It's been %d days since my birth\n",daysSinceBirth);
    return 0;
}
