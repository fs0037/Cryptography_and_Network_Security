#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

long long power(long long a, long long b, long long m) {
    long long res = 1;
    a %= m;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return res;
}

int main() {
    long long p;
    int t = 10;
    cout << "Enter a number: ";
    cin >> p;

    if (p <= 2) {
        cout << "Number must be greater than 2" << endl;
        return 0;
    }

    bool is_prime = true;
    for (int i = 0; i < t; i++) {
        long long a = 2 + rand() % (p - 2);
        long long exp = (p - 1) / 2;
        long long result = power(a, exp, p);

        if (result != 1 && result != (p - 1)) {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        cout << p << " is probably prime" << endl;
    else
        cout << p << " is composite" << endl;

    return 0;
}

