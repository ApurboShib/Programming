#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 505;
int n;
int a[N][N];
void solveRow(int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        swap(a[x][i], a[y][i]);
    }
}
void solveColumn(int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        swap(a[i][x], a[i][y]);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    solveRow(x - 1, y - 1);
    solveColumn(x - 1, y - 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
