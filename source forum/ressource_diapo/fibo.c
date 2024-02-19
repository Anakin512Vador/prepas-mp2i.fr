#include <stdio.h>

// fonction recursive
int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// fonction iterative
int fibonacci_iterative(int n) {
    int a = 0;
    int b = 1;
    int c;
    for (int i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}



