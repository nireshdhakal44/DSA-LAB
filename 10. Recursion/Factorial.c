#include <stdio.h>

int factorial(int);

int main() {
    int n;
    int fact;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    fact = factorial(n);
    
    printf("%d! = %d\n", n, fact);
    
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
