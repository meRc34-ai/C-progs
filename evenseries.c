#include<stdio.h>
int main(){
    
    for (int num = 1; num < 51; num++)
    {
        if(num%2 == 0){
            printf("%d", num);
            printf("\n");
        }
    }
    return 0;
}