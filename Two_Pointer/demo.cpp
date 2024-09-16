#include <iostream>
#include <vector>
#include <climits>

using namespace std;

pair<int, int> max_beauty(const vector<int>& arr, int n) {
    vector<int> prefix_sums(n + 1, 0);
    
    for (int i = 1; i <= n; ++i) {
        prefix_sums[i] = prefix_sums[i - 1] + arr[i - 1];
    }

    int max_sum = INT_MIN, max_moves = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            int subarray_sum = prefix_sums[j] - prefix_sums[i - 1];

            if (subarray_sum > max_sum) {
                max_sum = subarray_sum;
                max_moves = j - i;
            } else if (subarray_sum == max_sum) {
                max_moves = min(max_moves, j - i);
            }
        }
    }

    return {max_sum, max_moves};
}

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; ++i) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }

        auto result = max_beauty(arr, n);
        cout << "Case " << i << ": " << result.first << " " << result.second << endl;
    }

    return 0;
}
