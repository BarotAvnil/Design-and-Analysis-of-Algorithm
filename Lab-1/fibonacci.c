#include <stdio.h>
void main(){
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;
        }
        printf("\n");
    }
}