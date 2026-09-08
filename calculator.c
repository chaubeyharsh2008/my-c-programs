#include <stdio.h>
int main()
{
    float a,b, sum, multiply, divide, subtract;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    
    sum=a+b;
    multiply=a*b;
    divide=a/b;
    subtract=a-b;
    
    printf("sum= %f\n", sum);
    printf("multiply= %f\n", multiply);
    printf("divide= %f\n", divide);
    printf("subtract= %f\n", subtract);
}