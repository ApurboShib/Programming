#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    double requires_run_rate;
    double current_run_rate;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ball = (300 - c);
        current_run_rate = (b / (ball / 6.0));
        // cout << current_run_rate<<endl;
        // cout << "ball"<<ball<<endl;
        if (a < b)
        {
            requires_run_rate = 0.00;
        }
        else
        {
            requires_run_rate = ((a - b + 1) / (c / 6.0));
        }

        cout << fixed << setprecision(2) << current_run_rate << " " << requires_run_rate << endl;
    }

    return 0;
}
