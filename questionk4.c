#include<stdio.h>
int main()
{
    int number = 101;
    float subject1 = 85.50;
    float subject2 = 90.00;
    float subject3 = 78.25;
    char grade = 'A';

    printf("---------------REPORT CARD------------------\n");
    printf("Roll Number\t: %d\n",number);
    printf("Subject1\t: %.2f\n",subject1);
    printf("Subject2\t: %.2f\n",subject2);
    printf("Subject3\t: %.2f\n",subject3);
    printf("Grade\t\t: %c\n",grade);
    printf("----------------------------------------------\n");

    return 0;

}