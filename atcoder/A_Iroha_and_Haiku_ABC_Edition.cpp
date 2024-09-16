#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;
int memo[N][N]; 

// Function to find the length of the Longest Palindrome Substring using memoization
int lps(const string& s, int i, int j)
{
    if (i > j)
        return 0;

    if (memo[i][j] > -1)
        return memo[i][j];

    if (s[i] == s[j])
    {
        int equalCharacters = 2 - (i == j);
        return memo[i][j] = equalCharacters + lps(s, i + 1, j - 1);
    }
    return memo[i][j] = max(lps(s, i + 1, j), lps(s, i, j - 1));
}

// Function to find the length of the Longest Palindrome Substring in a string
int longest_palindrome(const string& s)
{
    memset(memo, -1, sizeof memo);
    return lps(s, 0, s.length() - 1);
}

// Function to find the longest repeated subsequence in a string
string longestRepeatedSubSeq(string str) 
{ 
    int n = str.length(); 
    int dp[n+1][n+1]; 
    for (int i=0; i<=n; i++) 
        for (int j=0; j<=n; j++) 
            dp[i][j] = 0; 
    for (int i=1; i<=n; i++) 
        for (int j=1; j<=n; j++) 
            if (str[i-1] == str[j-1] && i != j) 
                dp[i][j] =  1 + dp[i-1][j-1]; 
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]); 
    string res = ""; 
    int i = n, j = n; 
    while (i > 0 && j > 0) 
    {
        if (dp[i][j] == dp[i-1][j-1] + 1) 
        { 
           res = res + str[i-1]; 
           i--; 
           j--; 
        }
        else if (dp[i][j] == dp[i-1][j]) 
            i--; 
        else
            j--; 
    } 
    reverse(res.begin(), res.end()); 
    return res; 
} 

// Function to find the length of the Longest Increasing Decreasing Subsequence
int lidss(int n, int arr[])
{
    if(n == 0)
        return 0;
    int lenI[n];
    int lenD[n];
    for(int i = 0; i < n; i++)
    {
        lenI[i] = 1;
        lenD[i] = 1;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[j] < arr[i] && lenI[i] < lenI[j] + 1)
            {
                lenI[i] = lenI[j] + 1;
            }
        }
    }
    for(int i = n - 2; i >= 0; i--)
    {
        for(int j = n - 1; j > i; j--)
        {
            if(arr[j] < arr[i] && lenD[i] < lenD[j] + 1)
            {
                lenD[i] = lenD[j] + 1;
            }
        }
    }
    int max = 1;
    for(int i = 0; i < n; i++)
    {
        int len = lenI[i] + lenD[i] - 1;
        if(max < len)
        {
            max = len;
        }
    }
    return max;
}

// Function to find the index in the vector
int index(vector<int> &v, int l, int r, int key) {
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (v[m] >= key)
            r = m;
        else
            l = m;
    }
    return r;
}

// Function to find the length of the Longest Increasing Subsequence
int LIS(vector<int> &v) {
    if (v.size() == 0)
        return 0;
    vector<int> tail(v.size(), 0);
    int length = 1; 
    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] < tail[0])
            tail[0] = v[i];
        else if (v[i] > tail[length-1])
            tail[length++] = v[i];
        else
            tail[index(tail, -1, length-1, v[i])] = v[i];
    }
    return length;
}
// Function to find the maximum continuous subarray
int max(int x, int y) {
    return x > y ? x : y;
}
int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int all_max = arr[0], curr_max = arr[0]; // initial
    int templ, tempr, a_i, l = 0, r = 0; // initial
    templ = 0, tempr = 0;
    for(i = 1; i < n; i++){
        if(arr[i] > curr_max + arr[i]){
            templ = i;
            tempr = i;
            curr_max = arr[i];
        }else{
            tempr++;
            curr_max = curr_max + arr[i];
        }
        if(curr_max > all_max){
            l = templ;
            r = tempr;
            all_max = curr_max;
        }
    }
    printf("%d %d %d", all_max, l, r);
}

