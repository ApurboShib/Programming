#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    long long x;
   cin >> x;


    long long ans = 1;

   
    bool f = true;

    
    for (int i = 1; i <= 7; i++)
    {
   
      if (x >= ans)
      {
        x -= ans;
        ans *= 2;
      }
      else
      {
        f = false;
        break;
      }
    }

 
    if (f)
    {
     cout << "YES" <<endl;
    }
    else
    {
     cout << "NO" <<endl;
    }
  }

  return 0;
}
