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

// for worst case
// int main(){
//     FILE *file;
//     clock_t start, end;
//     double cpu_time_used;
//     int arr[100000];
//     int n = 100000;
    
//     file = fopen("worst.txt", "r");
//     if (file == NULL) {
//         printf("Failed to open file.\n");
//         return 1;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int num = rand() % 100000;
//         fscanf(file, "%d", num);
//     }
//     fclose(file);
    
//     printf("Worst Case Scenario:\n");
    
//     start = clock();
//     bubbleSort(arr, n);
//     end = clock();
    
//     cpu_time_used = ((double)(end-start)) / CLOCKS_PER_SEC;
//     printf("Time taken: %f seconds\n", cpu_time_used);    
// }

// for avg case
// int main() {
//     FILE *file;
//     clock_t start, end;
//     double cpu_time_used;
//     int arr[100000];
//     int n = 10000;


//     file = fopen("random.txt", "w");
//     if (file == NULL) {
//         printf("Failed to create file.\n");
//         return 1;
//     }

//     for (int i = 0; i < n; i++) {
//         fprintf(file, "%d ", rand() % 100000);
//     }
//     fclose(file);


//     file = fopen("random.txt", "r");
//     if (file == NULL) {
//         printf("Failed to open file.\n");
//         return 1;
//     }

//     for (int i = 0; i < n; i++) {
//         fscanf(file, "%d", &arr[i]);
//     }
//     fclose(file);

//     printf("Average Case Scenario:\n");

//     start = clock();
//     bubbleSort(arr, n);
//     end = clock();

//     cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
//     printf("Time taken: %f seconds\n", cpu_time_used);

//     return 0;
// }

// for best case
int main() {
    FILE *file;
    clock_t start, end;
    double cpu_time_used;
    int arr[100000];
    int n = 100000;

    file = fopen("best.txt", "w");
    if (file == NULL) {
        printf("Failed to create file.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fprintf(file, "%d ", i);
    }
    fclose(file);

   
    file = fopen("best.txt", "r");
    if (file == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &arr[i]);
    }
}