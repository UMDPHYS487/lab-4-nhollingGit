#include <iostream>
using namespace std;

int factorial(int i) {
    int res = 1;
    for(i; i>0; i--) {
        res *= i;
    }
    return res;
}

int main() {
    int N;
    cout << "Please enter an interger number: ";
    cin >> N;
    cout << "The value you entered is " << N << " and its factorial is " << factorial(N) << endl;
    return 0;
}