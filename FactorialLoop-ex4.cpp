#include <cstdio>

int factorial(int i) {
    int res = 1;
    for(i; i>0; i--) {
        res *= i;
    }
    return res;
}

int main() {
    int i = 1;
    for(i = 1; i <= 10; i++) {
        printf("factorial of %d is %d\n", i, factorial(i));
    }
    return 0;
}