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

 char tmp = s[0];

 for(int i = 0; i < s.size(); i++){
 	char ch = (9 - (s[i] - '0') + '0');
 	if(ch < s[i]){
 		s[i] = ch;
 	}
 }

 if(s[0] == '0'){
 	s[0] = tmp;
 }

 cout << s;

 return 0;
}