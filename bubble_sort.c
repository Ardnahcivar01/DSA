#include<stdio.h>
#include<stdbool.h>

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[],int n){
    int i,j;
    bool swapped ;
    for(int i =1;i<n;i++){
        swapped = false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
            swap(&arr[j],&arr[j+1]);
            swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
    
    
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {12,2,4322,4321,123,42};
    int n = 6;
    sort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}