#include <stdio.h>
int main()
{
    //varibales 
    int roll;

    roll = 101;

    float A1 = 85.50;
    float A2 = 90.00;
    float A3 = 78.25;
    char A = 'A';

    printf("---------REPORT CARD--------------\n");
    printf("Roll number\t: %d\n", roll);
    printf("Subject 1\t: %.2f\n",A1);
    printf("Subject 2\t: %.2f\n",A2);
    printf("Subject 3\t: %.2f\n",A3);
    printf("Grade\t\t: %c\n",A);
    printf("---------------------------------");

    return 0;
}