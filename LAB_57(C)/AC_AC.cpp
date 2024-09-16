
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        long int len = s.length();

        long int ans = len - 1;

        map<char, long int> cnt;
        for (char c : s)
        {
            cnt[c]++;
        }

        for (int i = 26; i >= 1; i--)
        {

            if (len % i == 0)
            {
                long int temp = 0;
                long int freq = len / i;

                for (auto it = cnt.rbegin(); it != cnt.rend() && i > 0; ++it)
                {
                    temp += abs(freq - it->second);
                    i--;
                }

                for (auto it = cnt.rbegin(); it != cnt.rend() && i > 0; ++it)
                {
                    if (it->second != 0)
                    {
                        temp += it->second;
                    }
                    i--;
                }

                temp /= 2;

                if (ans > temp)
                {
                    ans = temp;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
