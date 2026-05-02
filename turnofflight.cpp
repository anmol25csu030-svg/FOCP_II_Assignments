#include <iostream>
using namespace std;

bool check(string s, int n, int k, int l) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count++;
            i += l - 1;
        }
    }
    return count <= k;
}

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int left = 1, right = n, ans = n;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (check(s, n, k, mid)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;
}