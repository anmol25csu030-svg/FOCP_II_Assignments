#include <iostream>
using namespace std;

long long balance[100001];

int main() {
    int Q;
    cin >> Q;

    for (int i = 0; i < 100001; i++)
        balance[i] = -1;

    while (Q--) {
        string query;
        cin >> query;

        if (query == "CREATE") {
            int x;
            long long y;
            cin >> x >> y;

            if (balance[x] == -1) {
                balance[x] = y;
                cout << "true\n";
            } else {
                balance[x] += y;
                cout << "false\n";
            }
        }

        else if (query == "DEBIT") {
            int x;
            long long y;
            cin >> x >> y;

            if (balance[x] == -1 || balance[x] < y) {
                cout << "false\n";
            } else {
                balance[x] -= y;
                cout << "true\n";
            }
        }

        else if (query == "CREDIT") {
            int x;
            long long y;
            cin >> x >> y;

            if (balance[x] == -1) {
                cout << "false\n";
            } else {
                balance[x] += y;
                cout << "true\n";
            }
        }

        else if (query == "BALANCE") {
            int x;
            cin >> x;

            cout << balance[x] << endl;
        }
    }
}