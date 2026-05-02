#include <iostream>
using namespace std;

int countDistinctPrimes(int n) {
    int count = 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n > 1) count++;

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int k = countDistinctPrimes(n);

        cout << (1 << k) << endl;
    }
}