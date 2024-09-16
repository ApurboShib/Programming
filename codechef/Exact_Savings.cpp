#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int N, X, Z;  // Number of gifts, earnings per hour, savings goal
        cin >> N >> X >> Z;

        vector<int> gifts(N);  // Prices of gifts
        for (int i = 0; i < N; ++i) {
            cin >> gifts[i];
        }

        // Sort gifts in ascending order to explore cheaper options first
        sort(gifts.begin(), gifts.end());

        int hours = 0;
        for (int i = 0; i < N; ++i) {
            // If adding the current gift's price doesn't exceed the savings goal, consider buying it
            if (hours * X + gifts[i] <= Z) {
                hours += (Z - (hours * X + gifts[i])) / X;  // Calculate hours needed to reach exact savings
                break;  // Stop buying more gifts once the goal is reached
            }
        }

        cout << (hours * X == Z ? hours : -1) << endl;  // Print hours or -1 if impossible
    }

    return 0;
}
