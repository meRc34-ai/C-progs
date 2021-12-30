#include<stdio.h>

int main(){
    const double PI = 3.14;
    double rad;
    double circumF;

    printf("Enter radius of the circle: ");
    scanf("%lf", &rad);

    circumF = (2*PI*rad);

    printf("The cirumference of the circle is %.2lf", circumF);
    return 0;
}