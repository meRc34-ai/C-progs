/*C program to sort the elements of an array in ascending order*/
#include<stdio.h>
int main(){
    //initialize array
    int arr[] = {56,28,89,74,15};
    int temp = 0;
    
    //Calculate length of array arr
    int length = sizeof(arr)/sizeof(arr[0]);

    //Displaying elements of original array
    printf("Elements of original array: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    //Sort the array in ascending order
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n");

    //Displaying elements of array after sorting
    printf("Elements of array sorted in ascending order: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0; 
}
