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
 vector <int> v(n);
 for(int i = 0; i < n; i++)cin >> v[i];

 int cnt1, cnt2, cnt3, cnt4 = 0;

 for(int i = 0; i < n; i++){
 	if(v[i] == 1)cnt1++;
 	if(v[i] == 2)cnt2++;
 	if(v[i] == 3)cnt3++;
 	if(v[i] == 4)cnt4++;
 } 
 int cnt = 0;
 if(cnt1!=0 and cnt3!=0){
 	cnt3--;
 	cnt1--;
 	cnt++;
 }
 if(cnt1 == 0 and cnt3 != 0){
 	cnt+=cnt3;
 	cnt3 = 0;
 }
 int cnt = cnt / 2;
 cout << cnt << endl;

 return 0;
}