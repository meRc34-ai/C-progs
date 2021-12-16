#include<stdio.h>
int main(){
    for (int num = 0; num < 11; num++)
    {
        if(num%2 != 0){
            printf("%d", num);
            printf("\n");
        }
    }
    
    return 0;
}