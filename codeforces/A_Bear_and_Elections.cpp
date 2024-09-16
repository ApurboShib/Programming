#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    priority_queue<int>pq;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        pq.push(x);

    }
    int cnt = 0;
    while(!pq.empty()){
        int t = pq.top();
        pq.pop();
        cnt++;
        

    }
    return 0;
}
