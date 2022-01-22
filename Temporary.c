#include<stdio.h>
#include<conio.h>
int main(){
    int arr[100], n, i = 0, search;
     printf("Enter the size of array: ");
     scanf("%d", &n);

     printf("Enter the elements in array: ");
     
     do
     {
         scanf("%d", &arr[i]);
         i++;
     } while (i<n);

     printf("Enter the element you want to search: ");
     scanf("%d", &search);

     for (i = 0; i < n; i++)
     {
         if(arr[i] == search){
             printf("%d is present at the location %d", search, i+1);
             return 0;
         }
     }
     printf("Element not found");
     
}