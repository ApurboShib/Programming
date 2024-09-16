#include<bits/stdc++.h>
using namespace std;
stack<char>st;
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin >> t;
while(t--){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='A'){
            st.push(s[i]);
        }
        else if (s[i]=='B'){
            st.pop();
            st.push(s[i]);
        }
        for(auto ele : st)cout <<ele <<' ';
    }
    cout <<st.size()<<endl;
}
return 0;
}