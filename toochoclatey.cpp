#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    int alex = 0, bob = 0;
    int turn = 0;

    for (int i = 0; i < n; i++) {
        if (i > 0 && a[i] == a[i - 1]) continue;

        if (turn % 2 == 0)
            alex += a[i];
        else
            bob += a[i];

        turn++;
    }

    if (alex > bob)
        cout << "Alex";
    else
        cout << "Bob";
}