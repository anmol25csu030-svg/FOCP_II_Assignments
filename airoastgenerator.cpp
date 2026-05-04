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

    // Roast templates
    vector<string> roasts = {
        "{name} writes code slower than a turtle.",
        "{name} is the king of procrastination.",
        "{name} debugs by just staring at the screen.",
        "{name}'s code has more bugs than a jungle.",
        "{name} thinks Ctrl+C is real coding.",
        "{name}'s logic is on vacation.",
        "{name} types so slow, even a snail wins.",
        "{name} and mistakes are best friends.",
        "{name} makes simple things complicated.",
        "{name} is proof that practice is needed."
    };

    // Random
    srand(time(0));
    int i = rand() % roasts.size();

    // Replace {name}
    string roast = roasts[i];
    int pos = roast.find("{name}");
    roast.replace(pos, 6, name);

    // Output
    cout << "Roast: " << roast;

    return 0;
}