/*you are given a string s of length N. answer Q query. given l and r , find the most 
common character in the substring d[l,r]
N,Q  = 100,000
s = "abccabaaabb";
*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
string s; cin >> s;
int n = s.size();
vector<vector<int>>pref(n+1, vector<int>(26));
for(int i=0; i<=n; i++){
pref[i+1] = pref[i]; // copy all 26 value
int char_id = s[i]-'a'; // value 0-25
pref[i+1][char_id]++;
}
int q; cin >> q;
int l,r; cin >> l >> r;
char best_char = '?';
int best_freq = -1;
for(int i = 0; i<26; i++){
    int freq = pref[r+1][i]-pref[l][i];
    if(freq>best_freq){
        best_freq = freq;
        best_char = 'a'+i;
    }
}
cout << best_freq << endl;

return 0;
}