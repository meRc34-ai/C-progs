#include<stdio.h>
void average(int,int,int,int,int,int);
void main(){
    int a,b,c,d,e,f;
    printf("\nGoing to calculate the average of six numbers: ");
    printf("\nEnter six numbers: ");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    average(a,b,c,d,e,f);
}

void average(int a, int b, int c, int d, int e, int f){
    float avg;
    avg = (a + b + c + d + e + f)/6;
    printf("The average of given six numbers: %f", avg);
}