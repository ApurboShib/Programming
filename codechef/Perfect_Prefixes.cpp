#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the beauty of the permutation
int calculateBeauty(const vector<int>& P, int N) {
    vector<int> seen(N + 1, 0);
    int beauty = 0;
    for (int i = 0; i < N; ++i) {
        seen[P[i]] = 1;
        bool isPermutation = true;
        for (int j = 1; j <= i + 1; ++j) {
            if (!seen[j]) {
                isPermutation = false;
                break;
            }
        }
        if (isPermutation) {
            beauty++;
        }
    }
    return beauty;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; ++i) {
            cin >> P[i];
        }
        
        int initialBeauty = calculateBeauty(P, N);
        int maxBeauty = initialBeauty;

        // Try performing the operation with different (L, R) pairs
        for (int L = 0; L < N; ++L) {
            for (int R = L + 1; R < N; ++R) {
                if ((L % 2) != (R % 2)) {
                    vector<int> newP = P;
                    for (int i = L; i < R; i += 2) {
                        swap(newP[i], newP[i + 1]);
                    }
                    int newBeauty = calculateBeauty(newP, N);
                    maxBeauty = max(maxBeauty, newBeauty);
                }
            }
        }

        cout << maxBeauty << endl;
    }
return 0;
}
