// Given two strings A and B of length N, the task is to check whether the two strings can be made equal by swapping any character of A with any other character of B only once.

/*#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

bool solve(string s1, string s2) {
    bool f = false;
    for(int i = 0; i < s1.size(); i++) {
        for(int j = 0; j < s2.size(); j++) {
            swap(s1[i], s2[j]);
            if(s1 == s2){
                f = true;
                break;
            }
            swap(s1[i], s2[j]);
        }
        if(f){
            break;
        }
    }
    return f;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    if(solve(a, b)) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}*/

// approch - 2

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

bool solve(string s1, string s2) {
    vector<char> v1, v2;

    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i]) {
            v1.push_back(s1[i]);
            v2.push_back(s2[i]);
        }
    }

    if(v1.size() == v2.size() and v2.size() == 0) {
        return true;
    }

    if(v1.size() == v2.size() and v2.size() == 2) {
        if(v1[0] == v1[1] and v2[1] == v2[0]){
            return true;
        }
    }
    return false;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    if(solve(a, b)) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}



