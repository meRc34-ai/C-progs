/*C program to find the sum of all the even numbers in given range*/

#include<stdio.h>
int main(){
    int M, N, sum = 0; // M is lower limit and N is upper limit 

    //input upper limit and lower limit
    printf("Enter lower limit: ");
    scanf("%d", &M);
    printf("Enter upper limit: ");
    scanf("%d", &N);
    
    //if M is not even make it even
    if(M%2 != 0){
        M++;
    }
    for (int i = M; i < N; i = i + 2)
    {
        //add current even number to sum
        sum = sum + i;
    }
        
    printf("Sum of all even numbers between %d to %d is %d", M, N, sum);
    return 0;
}