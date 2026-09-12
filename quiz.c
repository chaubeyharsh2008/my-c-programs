#include<stdio.h>>
int main()
{
    int subject;

    
   
    printf("enter you subject :\n 1. maths\n 2.science\n 3.science and maths\n ");
    scanf("%d", &subject);

    if (subject== 1)
    {
        printf("your prize is 15");

    }
    else if(subject== 2)
    {
        printf("your prize is 15");
    }

    else if (subject== 3)
    {
        printf("your prize is 45");
    }

    else
    {
        printf("you have enter a invalid subject ");
    
    }
    

    // {
    //     printf("you have enter a invalid subject ");
    // }
    
    return 0;
    
    


}