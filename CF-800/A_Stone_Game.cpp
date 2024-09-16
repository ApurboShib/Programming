#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> powers(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> powers[i];
        }

        // Find the positions of the stones with the least and greatest power
        int minPos = min_element(powers.begin(), powers.end()) - powers.begin();
        int maxPos = max_element(powers.begin(), powers.end()) - powers.begin();

        // Calculate the minimum number of moves to destroy the stones
        int moves = min({max(minPos, maxPos) + 1, n - min(minPos, maxPos)});

        cout << moves << endl;
    }

    return 0;
}
