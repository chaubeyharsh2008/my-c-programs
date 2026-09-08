#include <stdio.h>
int main()
{
    int items = 4;
    int items2 = 150;
    float price = 150.00;
    char mode = 'D';

    printf("-------------SHOPPING BILL------------------\n");
    printf("Item purchased  : %d\n",items);
    printf("prince per item : %.2f\n",price);
    printf("total price\t: %d\n",items*items2);
    printf("Payment mode\t: %c\n",mode);
    printf("---------------------------------------------\n");

    return 0;





}