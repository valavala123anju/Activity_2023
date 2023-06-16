#include <stdio.h>
int biggest(int x, int y) {
     x > y ? printf("\n X is the biggest Number:%d",x):(y>x?printf("\n Y is the biggest number:%d",y):printf("\n Both X and Y are Equal"));
}
int main() {
    int x,y;
    printf("\nEnter the X and Y values:");
    scanf("%d%d",&x,&y);
    biggest(x,y);
    return 0;
}