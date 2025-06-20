#include<stdio.h>
int insertionSort(int arr[], int n){
    int i,j,key;
    for ( i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return 0;
}

int main(){
    int arr[] = {20,13,5,11,43,14,87,19,9,10};
    insertionSort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
}