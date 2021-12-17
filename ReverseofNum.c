#include<stdio.h>
int main(){
    int num, reverse = 0, rem;
    printf("Enter a integer number\n");
    scanf("%d", &num);

    while(num){
        rem = num % 10;
        reverse = (reverse * 10) + rem;
        num = num/10;
    }
    printf("Reversed number is %d\n", reverse);
    return 0;
}