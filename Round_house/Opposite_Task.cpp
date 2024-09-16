/*#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
        int n;
        cin >> n;
        if (n > 10)
        {
            a = n / 2;
            b = n - a;
        }
        else
        {
            a = 0;
            b = n;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    int a,b;
    int flag = 0;
    if(n>10){
        a = n/2;
        b = n-1;
        flag++;
        
    }
    else{
        a = 0;
        b = n;
    }
    if(flag>0){
        a-=1;
        b-=1;
    }
    cout << a << " " << b << endl;
    cout <<flag<<endl;
}
return 0;
}