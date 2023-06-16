#include <stdio.h>
#include <string.h>

int main(){

    int roll,phy,che,math,total;
    float per;
    char name[20];

    printf("Input the Roll Number of the student :");
    scanf("%d",&roll);
    printf("Input the Name of the Student :");
    scanf("%s",name);
    printf("Input  the marks of Physics : ");
    scanf("%d",&phy);
    printf("Input  the marks of Chemistry : ");
    scanf("%d",&che);
    printf("Input  the marks of Maths : ");
    scanf("%d",&math);
    
    total = phy+che+math;
    per = total/3.0;

    printf("%s /s roll number is %d\n",name,roll);
    printf("Total Marks of all subject is %d and Percentage is %.2f\n",total,per);

    return 0;
}
