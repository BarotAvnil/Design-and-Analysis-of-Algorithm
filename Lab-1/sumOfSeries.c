//sum of series with iterative approach
#include <stdio.h>
void main() {
    int n, sum = 0;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i; 
        }
        printf("Sum of the series: %d\n", sum);
    }
}