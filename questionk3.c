#include<stdio.h>
int main()
{
    int day = 15;
    float morning = 22.50;
    float evening = 18.75;
    char condition = 'S';

    printf("------------WEATHER REPORT--------------\n");
    printf("Day \t\t: %d\n",day);
    printf("Morning temp    : %.2f\n",morning),
    printf("Evening temp    : %.2f\n",evening);
    printf("Condition\t: %c\n",condition);
    printf("----------------------------------------\n");
    return 0;


}
