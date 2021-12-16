#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num%2 == 0){
        printf("Its an even number");
    }
    else{
        printf("Its an odd number");
    }

    return 0;
}