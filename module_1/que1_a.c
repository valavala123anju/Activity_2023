#include <stdio.h>
int biggest(int x, int y) {
    if (x > y) {
        printf("\n X is the biggest number");
    }
    if(y>x){
        printf("\n Y is the biggest number");
    }
    else {
        printf("\n Both are Equal");
    }
}
int main() {
    int x,y,Max;
    printf("\nEnter the X and Y values:");
    scanf("%d%d",&x,&y);
    Max = biggest(x,y);
    return 0;
}