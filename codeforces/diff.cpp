#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];

        // Find the maximum element in the array
		int maxElement = *max_element(v.begin(), v.end());

        // Initialize count array with size maxElement + 2 and set all elements to 0
		vector<int> count(maxElement + 2, 0);

        // Update the count of each element in the array
		for (auto x : v) {
			count[x]++;
		}

        // Find the maximum sum of any two consecutive elements
		int sum = 0;
		for (int i = 0; i <= maxElement; ++i) {
			sum = max(sum, count[i] + count[i + 1]);
		}

		cout << sum << endl;
	}

	return 0;
}