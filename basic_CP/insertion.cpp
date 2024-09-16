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
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		for(int i = n - 1; i > 0; i--){
			int min  = i;
			for(int j = i; j >= 0; j--){
				if(a[j] >= a[min]){
					min = j;
				}

			}
			cout << min << ' ';
			swap(a[min], a[i]);

		}
		cout << endl;
	}

	return 0;
}