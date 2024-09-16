#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int v[a];
    for (int i = 0; i < (a - 1); i++)
    {
        cin >> v[i];
    }

    int i = 0;
    while (i < a - 1)
    {
        i += v[i];
        if (i == b - 1)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
