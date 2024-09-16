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
	while(t--){
		string s;
		cin >> s;
		if(s.size() < 2){
			cout << "No" << endl;
			continue;
		}

		map<char,int> mp;
		for(auto x : s){
			mp[x]++;
		}
		bool f = false;

		for(auto x : mp){
			if(x.second == 2){
				cout << "Yes" << endl;
				f = true;
				break;
			}
		}
		if(!f){
			cout << "No" << endl;
		}
	}

	return 0;
}