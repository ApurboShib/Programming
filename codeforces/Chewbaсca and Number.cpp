#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		int dig = s[i] - '0';
		if (i == 0 and dig >= 5 and dig < 9) {
			s[i] = '0' + (9 - dig);
		} else if (i > 0 and dig >= 5) {
			s[i] = '0' + (9 - dig); 
		}
	}
	cout << s << endl;

	return 0;
}