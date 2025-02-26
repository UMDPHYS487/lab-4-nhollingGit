#include <cstdio>
int main() {
    int i=1, n = 1, res;
    for(i = 1; i <= 10; i++) {
        // Reset the variables for each factorial
        res = 1;
        n = 1;
        for(n = i; n>0; n--) {
            res *= n;
        }
        printf("factorial of %d is %d\n", i, res);
    }
}