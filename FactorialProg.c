#include<stdio.h>
int main(){
    int num, i, facto = 1; // num is 
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        facto = facto*i;
    }
    printf("factorial of %d is: %d", num, facto);
    return 0;
}

