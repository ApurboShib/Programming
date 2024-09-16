#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int ans = -1;
    for (int i = 0; i < s.size(); i++){
        if (s[i] != 'a')
        {
            ans = i;
            break;
        }
    }
    if (ans == -1){
        s[s.size() - 1] = 'z';
        cout << s << endl;
    }
    else{
        for (int i = ans; i < s.size(); i++){
            if (s[i] != 'a'){
                s[i] -= 1;
            }
            else{
                break;
            }
        }
        cout << s << endl;
    }

    return 0;
}
