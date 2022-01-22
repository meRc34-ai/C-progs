/*
 * C Program to Find Union & Intersection of 2 Arrays
 */
#include <stdio.h>
#define SIZE 5

void get_value(int arr[]);
void print_value(int arr[], int n);
void function_sort(int arr[]);
int find_intersection(int array1[], int array2[], int intersection_array[]);
int find_union(int array1[], int array2[], int union_array[]);
 
void main()
{
    int array1[SIZE], array2[SIZE], intersection_array[SIZE], union_array[SIZE*2];
    int num_elements;
 
    //input elements of Array1
    printf("\nEnter the elements of Array 1: \n");
    get_value(array1);
    printf("\nElements of Array 1: ");
    print_value(array1, SIZE);
 
    //Sort array 1
    function_sort(array1);
    printf("\n\nSorted elements of Array 1: ");
    print_value(array1, SIZE);
 
    //input elements of Array2
    printf("\nEnter the elements of Array 2: \n");
    get_value(array2);
    printf("\nElements of Array 2: ");
    print_value(array2, SIZE);
 
    //Sort array 2
    function_sort(array2);
    printf("\n\nSorted elements of Array 2: \n");
    print_value(array2, SIZE);
 
    //Find Intersection
    num_elements = find_intersection(array1, array2, intersection_array);
    printf("\n\nIntersection is: ");
    print_value(intersection_array, num_elements);
 
    //Find Union
    num_elements = find_union(array1, array2, union_array);
    printf("\n\nUnion is: \n");
    print_value(union_array, num_elements);
}

//function to get user input
void get_value(int arr[]) 
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        j = i + 1;
        printf("\n Enter element %d: ", j);
        scanf("%d", &arr[i]);
    }
}

//function to print the elements of the array
void print_value(int arr[], int n) 
{
    int i;
    printf("{ ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}");
}

//function to sort an unsorted array in ascending order
void function_sort(int arr[]) 
{
    int i, j, temp, swapping;
 
    for (i = 1; i < SIZE; i++)
    {
        swapping = 0;
        for (j = 0; j < SIZE-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapping = 1;
            }
        }
        if (swapping == 0)
        {
            break;
        }
    }
}

//function to find the intersection of two arrays
int find_intersection(int array1[], int array2[], int intersection_array[]) 
{
    int i = 0, j = 0, k = 0;
    while ((i < SIZE) && (j < SIZE))
    {
        if (array1[i] < array2[j])
        {
            i++;
        }
        else if (array1[i] > array2[j])
        {
            j++;
        }
        else
        {
            intersection_array[k] = array1[i];
            i++;
            j++;
            k++;
        }
    }
    return(k);
}

//function to find union of two arrays
int find_union(int array1[], int array2[], int union_array[]) 
{
    int i = 0, j = 0, k = 0;
    while ((i < SIZE) && (j < SIZE))
    {
        if (array1[i] < array2[j])
        {
            union_array[k] = array1[i];
            i++;
            k++;
        }
        else if (array1[i] > array2[j])
        {
            union_array[k] = array2[j];
            j++;
            k++;
        }
        else
        {
            union_array[k] = array1[i];
            i++;
            j++;
            k++;
        }
    }
    if (i == SIZE)
    {
        while (j < SIZE)
        {
            union_array[k] = array2[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i < SIZE)
        {
            union_array[k] = array1[i];
            i++;
            k++;
        }
    }
    return(k);
}