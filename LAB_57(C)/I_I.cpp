#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int find_previous(int x, int prime) {
    while (x % prime != 0) {
        x++;
    }
    return x;
}

int main() {
    int X2;
    cin >> X2;

    // Iterate through all possible primes less than X2
    for (int prime = 2; prime < X2; prime++) {
        if (is_prime(prime)) {
            // Check if prime is a divisor of X2
            if (X2 % prime == 0) {
                // Calculate the previous steps and find the minimum possible X0
                int X1 = find_previous(X2, prime);
                int X0 = find_previous(X1, prime);

                cout << X0 << endl;
                return 0;
            }
        }
    }

    return 0;
}
