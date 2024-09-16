#include <iostream>
using namespace std;

bool is_odd(int n)
{
    return n % 2 == 1;
}
bool is_palindrome(int n)
{
    if (n == 0)
        return true;
    char ch[40];
    int cnt = 0;
    while (n > 0)
    {
        int last_bit = n % 2;
        ch[cnt] = last_bit;
        cnt++;

        int dBit = n / 2;
        n = dBit;
    }

    char bin[40];
    for (int i = 0, j = cnt - 1; i < cnt; i++, j--)
    {
        bin[i] = ch[j];
    }

    for (int i = 0; i < cnt; i++)
    {
        if (bin[i] != ch[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (is_odd(n) and is_palindrome(n))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}