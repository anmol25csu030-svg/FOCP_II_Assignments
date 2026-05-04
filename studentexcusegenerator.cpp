#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string name;

    // Input
    cout << "Enter your name: ";
    cin >> name;

    // Excuse templates
    vector<string> excuses = {
        "{name} couldn't finish the assignment because the laptop updated for 6 hours.",
        "{name} tried doing homework, but Wi-Fi stopped working.",
        "{name} was about to submit when the file disappeared.",
        "{name}'s keyboard suddenly stopped working.",
        "{name}'s system crashed before saving the file.",
        "{name} forgot the charger and laptop died.",
        "{name} got logged out and lost all progress.",
        "{name} accidentally deleted the assignment.",
        "{name} was solving it but power cut happened.",
        "{name}'s browser stopped responding at the last moment."
    };

    // Random setup
    srand(time(0));
    int i = rand() % excuses.size();

    // Pick excuse
    string excuse = excuses[i];

    // Replace {name}
    int pos = excuse.find("{name}");
    excuse.replace(pos, 6, name);

    // Output
    cout << "Excuse: " << excuse;

    return 0;
}