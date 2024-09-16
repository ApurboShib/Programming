#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;
   while(t--) {
   	int n;
   	cin >> n;
   	string s;
   	cin >> s;
   	int f = -1, l = -1;

   	for(int i = 0; i < n; i++) 
   		if(s[i] == '0') l = i;
   		else if(f == -1) f = i;
   		if(f < l and f!= -1)s.erase(s.begin() + f, s.begin() + l);
   		cout << s << endl;
   	
   }
   return 0;
   
}