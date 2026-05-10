#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int is_prime[1001];
    for (int i = 2; i <= n; i++) is_prime[i] = 1;


    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p] == 1) {
            for (int i = p * 2; i <= n; i += p)
                is_prime[i] = 0;
        }
    }

    int only_primes[1001];
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (is_prime[i] == 1) {
            only_primes[count] = i;
            count++;
        }
    }

    cout << "Primes extracted into only_primes array: ";
    for (int i = 0; i < count; i++) {
        cout << only_primes[i] << " ";
    }
    cout << endl;

    return 0;
}