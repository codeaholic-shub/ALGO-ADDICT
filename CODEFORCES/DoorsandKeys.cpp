#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main () {

    int t;
    cin >> t;
    string sequence;
    while(t--) {
        cin >> sequence;
        map<char, int> keys = {
            {'r', 0},
            {'g', 0},
            {'b', 0}
        };

        string opened = "YES";
        for (int i = 0; i < 6; i++) {
            // uppercase from B to R = RGB
            if (sequence[i] >= 'B' && sequence[i] <= 'R') {
                if (!keys[tolower(sequence[i])]) {
                    opened = "NO";
                    break;
                }
            } else {
                // found a key
                keys[sequence[i]] = 1;
            }
        }
        cout << opened << endl;
    }
    return 0;
}
