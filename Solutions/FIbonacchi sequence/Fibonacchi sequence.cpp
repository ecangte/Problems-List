#include <iostream>
using namespace std;
constexpr int P = 1e9 + 7;

long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    long long d1 = 1, d2 = 1, d3;
    for (int i = 0; i < n - 2; i++) {
        d3 = (d2 + d1) % P;
        d1 = d2;
        d2 = d3;
    }
    return d2;
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << '\n';
}