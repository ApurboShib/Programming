#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;  
vector<int> dp;
int coinChange(vector<int>& coins, int amount) {
    if (amount == 0) return 0;
    if (amount < 0) return INF;
    
    if (dp[amount] != -1) return dp[amount];
    
    int minCoins = INF;
    for (int coin : coins) {
        int subproblem = coinChange(coins, amount - coin);
        if (subproblem != INF) {
            minCoins = min(minCoins, 1 + subproblem);
        }
    }
    
    dp[amount] = minCoins;
    return minCoins;
}

int main() {
    int n, amount;
    cin >> n;  // Number of coin denominations
    vector<int> coins(n);
    
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    cin >> amount;  // Target amount
    
    vector<int> dp(amount + 1, -1);
    
    int result = coinChange(coins, amount);
    
    if (result == INF) {
        cout << "It is not possible to make the given amount with the provided coins." << endl;
    } else {
        cout << "Minimum number of coins needed: " << result << endl;
    }
    
    return 0;
}
