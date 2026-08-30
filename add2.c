#include <stdio.h>

int main() {
    // Declaring a float variable
    float floatVar = 3.123456789f; // The f suffix indicates that this value should be treated as a float.    

    // Declaring a double variable
    double doubleVar = 3.123456789123456; // Value assigned to a double variable with higher decimal places

    // Printing the values of float and double with full precision
    // Format specifier %f for float and %lf for double. However, %f works for both float and double in C
    printf("Value of floatVar (float): %f\n", floatVar); // Printing float value
    printf("Value of doubleVar (double): %lf\n", doubleVar); // Printing double value

    return 0;
}