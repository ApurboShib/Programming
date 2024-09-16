#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s;
        cin >> s;

        // Initialize variables
        int current = 1;  // Starting with a beautiful array of size 1
        vector<int> beautifulArray;

        // Construct a beautiful array
        while (s > 0) {
            beautifulArray.push_back(current);
            s -= current;
            current *= 2;  // Double the size for the next element
        }

        // Print the size of the beautiful array
        cout << beautifulArray.size() << endl;
    }

    return 0;
}
