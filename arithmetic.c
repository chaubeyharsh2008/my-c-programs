#include<stdio.h>
 int  main()
{
    int A = 10;
    int b = 20;

    int c = A;
    A = b;
    b = c;
    printf("%d\n",A);
    printf("%d",b);

    return 0;

}