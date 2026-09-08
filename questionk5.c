#include<stdio.h>
int main()

{
    int id = 2045;
    float salary = 35000;
    float A2 = 5000;
    float A3 = 1200;
    char depratment = 'A';

    printf("-----------------SALARY SLIP----------------------\n");
    printf("Employee ID\t: %d\n",id);
    printf("Basic salary\t: %.2f\n",salary);
    printf("Allowance\t: %.2f\n",A2);
    printf("Deduction\t: %.2f\n",A3);
    printf("Grade\t\t: %c\n",depratment);
    printf("----------------------------------------------------\n");
    return 0;
    



}