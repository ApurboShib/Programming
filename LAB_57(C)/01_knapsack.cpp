#include <bits/stdc++.h>
using namespace std;

const int N = 105; 

int val[N];
int wt[N];
int dp[N][N]; 

int knapsack(int n, int w) {
    if (n <= 0 || w <= 0)
        return 0;

    if (dp[n][w] != -1)
        return dp[n][w];

    if (wt[n - 1] > w)
        dp[n][w] = knapsack(n - 1, w);
    else
        dp[n][w] = max(knapsack(n - 1, w), val[n - 1] + knapsack(n - 1, w - wt[n - 1]));

    return dp[n][w];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, w;
    cin >> n >> w;

    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    memset(dp, -1, sizeof(dp));  

    int result = knapsack(n, w);
    cout << result << endl;

    return 0;
}
