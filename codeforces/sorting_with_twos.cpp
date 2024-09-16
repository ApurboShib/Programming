#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1]) {
                if(i!=1 && i!=2 &&i!=4 && i!=8 && i!=16){
                flag = 0;
                }
                
            }
        }
        
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
