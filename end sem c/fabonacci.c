#include<stdio.h>
int main(){
int fab[10];
fab[0]=0;
fab[1]=1;
for(int i=2;i<10;i++){
    fab[i]=fab[i-1]+fab[i-2];
}
for (int j=0;j<10;j++){
    printf("%d\n",fab[j]);
}}
#include<stdio.h>

// Function to calculate Fibonacci series recursively
int fibonacci_recursive(int n) {
    // Base case: when n is 0 or 1
    if (n <= 1) {
        return n;
    } else {
        // Recursive steps
        int fib_n_minus_1 = fibonacci_recursive(n - 1);  // Calculate Fibonacci of (n-1)
        int fib_n_minus_2 = fibonacci_recursive(n - 2);  // Calculate Fibonacci of (n-2)

        // Sum the calculated values to get Fibonacci of n
        int fib_n = fib_n_minus_1 + fib_n_minus_2;

        return fib_n;  // Return the result for Fibonacci of n
    }
}

int main() {
    // Printing Fibonacci series up to the 9th term (0-based index)
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    
    return 0;
}
