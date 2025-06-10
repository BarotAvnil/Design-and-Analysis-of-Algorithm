//sum of series  with recursion
#include <stdio.h>
int sumOfSeries(int n) {
    if (n <= 0) {
        return 0; 
    }
    return n + sumOfSeries(n - 1); 
}
void main() {
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumOfSeries(n);
        printf("Sum of the series: %d\n", sum);
    }
}