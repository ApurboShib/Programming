#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		
		vector<int> v(n); 
		map<int, int> mp;
		
		for(int i = 0; i < n; i++) {
			cin >> v[i];
			mp[v[i]]++;
		}
		
		sort(v.begin(), v.end());
		
		int pref = 0;
		int i;
		for (i = 0; i < n; i++) { 
			if (v[i] - pref > 1) {
				break;
			}
			pref = v[i];
		}
		
		if (i == n) {
			if (mp.size() % 2 == 0) {
				cout << "Bob" << endl;
			} else {
				cout << "Alice" << endl;
			}
		} else if (n == 1 || i % 2 == 0 || mp.size() == 1) {
			cout << "Alice" << endl;
		} else {
			cout << "Bob" << endl;
		}
	}

	return 0;
}
