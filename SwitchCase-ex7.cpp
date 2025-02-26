#include <iostream>
using namespace std;

int main() {
    int N;
    int res = 0;
    cin >> N;
    res = 2*(N < 10 && N % 2 == 0) + (N % 2 == 1);
    switch (res)
    {
        case 2: cout << N*N << "\n";
            break;
        case 1: cout << N/2.0 << "\n";
            break;
        default: cout << "hahaha\n";
    }
    return 0;
}