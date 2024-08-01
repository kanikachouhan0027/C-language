#include<stdio.h>

// Function to calculate Fibonacci series recursively
int fibonacci_recursive(int n) {
    // Base case: when n is 0 or 1
    if (n <= 1) {
        return n;
    } else {
        // Recursive step: sum of previous two Fibonacci numbers
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {
    // Printing Fibonacci series up to the 9th term (0-based index)
    int p;
    printf("enter p:");
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    
    return 0;
}//

#include<stdio.h>

// Function to calculate and print Fibonacci series iteratively
void fibonacci_iterative(int n) {
    // Array to store the Fibonacci series
    int fib_series[n + 1];
    fib_series[0] = 0;
    fib_series[1] = 1;

    // Iteratively calculate Fibonacci series
    for (int i = 2; i <= n; i++) {
        fib_series[i] = fib_series[i - 1] + fib_series[i - 2];
    }

    // Printing the calculated Fibonacci series
    for (int i = 0; i <= n; i++) {
        printf("%d ", fib_series[i]);
    }
}

int main() {
    // Calling the function to calculate and print Fibonacci series up to the 10th term
    fibonacci_iterative(10);

    return 0;
}

