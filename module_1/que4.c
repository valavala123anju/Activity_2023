#include <stdio.h>

int main(){

    float num1,num2;
    int operator;
    printf("Enter Number1 : ");
    scanf("%f",&num1);
    printf("1 for +\n2 for -\n3 for *\n4 for /\n");
    printf("Enter the operator: ");
    scanf("%d",&operator);

    switch (operator)
    {
    case 1:
        printf("Enter Number2 : ");
        scanf("%f",&num2);
        printf("%.2f\n",num1+num2);
        break;
    
    case 2:
        printf("Enter Number2 : ");
        scanf("%f",&num2);
        printf("%.2f\n",num1-num2);
        break;

    case 3:
        printf("Enter Number2 : ");
        scanf("%f",&num2);
        printf("%.2f\n",num1*num2);
        break;

    case 4:
        printf("Enter Number2 : ");
        scanf("%f",&num2);
        printf("%.2f\n",num1/num2);
        break;

    default:
        printf("Enter Valid operator");
        break;
    }

    return 0;
}