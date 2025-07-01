// Selection Sort
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
    return 0;
}

int main()
{
    FILE *file;
    clock_t start, end;
    double cpu_time_used;
    int arr[100000];
    int n = 100;

    file = fopen("worst.txt", "w");
    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return;
    }
    for (int i = n; i >= 1; i--)
    {
        fprintf(file, "%d ", i);
    }
    fclose(file);

    file = fopen("worst.txt", "r");
    if (file == NULL)
    {
        printf("Failed to read file.\n");
        return;
    }
    for (int i = 0; i < n; i++)
    {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);

    printf("Worst Case Scenario:\n");
    start = clock();
    selectionSort(arr, n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", cpu_time_used);
}
//     file = fopen("average.txt", "w");
//     if (file == NULL)
//     {
//         printf("Failed to open file.\n");
//         return;
//     }
//     srand(time(NULL));
//     for (int i = 0; i < n; i++)
//     {
//         int num = rand() % 100000;
//         fprintf(file, "%d ", num);
//     }
//     fclose(file);

//     file = fopen("average.txt", "r");
//     if (file == NULL)
//     {
//         printf("Failed to read file.\n");
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         fscanf(file, "%d", &arr[i]);
//     }
//     fclose(file);

//     printf("Average Case Scenario:\n");
//     start = clock();
//     selectionSort(arr, n);
//     end = clock();
//     cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
//     printf("Time taken: %f seconds\n", cpu_time_used);

//     // Best Case: already sorted
//     file = fopen("best.txt", "w");
//     if (file == NULL)
//     {
//         printf("Failed to open file.\n");
//         return;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         fprintf(file, "%d ", i);
//     }
//     fclose(file);

//     file = fopen("best.txt", "r");
//     if (file == NULL)
//     {
//         printf("Failed to read file.\n");
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         fscanf(file, "%d", &arr[i]);
//     }
//     fclose(file);

//     printf("Best Case Scenario:\n");
//     start = clock();
//     selectionSort(arr, n);
//     end = clock();
//     cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
//     printf("Time taken: %f seconds\n", cpu_time_used);
//     return 0;
// }
