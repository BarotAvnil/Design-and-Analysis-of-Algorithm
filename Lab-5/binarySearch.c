#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int binarySearch(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

void main()
{
    FILE *file;
    clock_t start, end;
    double cpu_time_used;
    int arr[100000];
    int n = 10000;
    int x = 10000;

    // Worst Case:
    file = fopen("worst.txt", "w");
    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return;
    }
    for (int i = 1; i <= n; i++)
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
    int result = binarySearch(arr, n, x);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (result != -1)
    {
        printf("Element found at index: %d\n", result);
    }
    else
    {
        printf("Element not found.\n");
    }
    printf("Time taken: %f seconds\n", cpu_time_used);

    // Average Case:
    file = fopen("average.txt", "w");
    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        fprintf(file, "%d ", i);
    }
    fclose(file);

    file = fopen("average.txt", "r");
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

    printf("Average Case Scenario:\n");
    start = clock();
    result = binarySearch(arr, n, x);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (result != -1)
    {
        printf("Element found at index:%d\n", result);
    }
    else
    {
        printf("Element not found.\n");
    }
    printf("Time taken: %f seconds\n", cpu_time_used);
    // Best Case:
    file = fopen("best.txt", "w");
    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        fprintf(file, "%d ", i);
    }
    fclose(file);
    file = fopen("best.txt", "r");
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
    printf("Best Case Scenario:\n");
    start = clock();
    result = binarySearch(arr, n, x);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    if (result != -1)
    {
        printf("Element found at index: %d\n", result);
    }
    else
    {
        printf("Element not found.\n");
    }
    printf("Time taken: %f seconds\n", cpu_time_used);
    fclose(file);
}
