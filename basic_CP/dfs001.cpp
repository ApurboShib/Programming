#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


vector<int> prime;
void seive(){
	vector<bool> vis(N + 2, true);
	vis[0] = vis[1] = false;
	for(int i = 2; i * i <= N; i++){
		if(vis[i]){
			for(int j = i * i; j <= N; j+=i){
				vis[j] = false;
			}
		}
	}
	for(int i = 2; i <= N; i++){
		if(vis[i]){
			prime.push_back(i);
		}
	}
	for(auto x : prime) cout << x << " ";
}
signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);
seive();
 

 return 0;
}