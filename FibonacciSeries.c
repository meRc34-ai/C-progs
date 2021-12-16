#include<stdio.h>
int main(){
    int i, n;

    //initialize first and second terms
    int a = 0;
    int b = 1;

    //initialize third term
    int temp = a + b;

    //get the number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    //print the first two terms a and b
    printf("Fibonacci series is: %d, %d, ", a, b);

    //print third to nth terms
    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", temp);
        a = b;
        b = temp;
        temp = a + b;
    }
    
    return 0;
}