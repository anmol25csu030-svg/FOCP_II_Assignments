#include <iostream>
using namespace std;

bool booked[1001][1001];
int countBooked[1001];

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        string query;
        cin >> query;

        if (query == "BOOK") {
            int x, y;
            cin >> x >> y;

            if (booked[x][y] || countBooked[y] == 100) {
                cout << "false\n";
            } else {
                booked[x][y] = true;
                countBooked[y]++;
                cout << "true\n";
            }
        }

        else if (query == "CANCEL") {
            int x, y;
            cin >> x >> y;

            if (!booked[x][y]) {
                cout << "false\n";
            } else {
                booked[x][y] = false;
                countBooked[y]--;
                cout << "true\n";
            }
        }

        else if (query == "IS_BOOKED") {
            int x, y;
            cin >> x >> y;

            if (booked[x][y])
                cout << "true\n";
            else
                cout << "false\n";
        }

        else if (query == "AVAILABLE_TICKETS") {
            int y;
            cin >> y;

            cout << 100 - countBooked[y] << endl;
        }
    }
}