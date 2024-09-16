#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;
 string s;
 cin >> s;
 int cnt = 0;
 while(n--){
 	if(s[0] == '+')cnt++;
 	if(s[0] == '-')cnt--;
 	if(s[2] == '+')cnt++;
 	if(s[2] == '-')cnt--;

 }
 cout << cnt << endl;

 return 0;
}