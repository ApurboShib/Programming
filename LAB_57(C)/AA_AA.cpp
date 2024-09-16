#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int MOD = 1000000007;
long long sum(int N,  vector<int>& A,  vector<int>& B) {

    vector<long long> C(N + 1, 0), D(N + 1, 0);
    C[1] = 1, D[2] = 1;

    for (int k = 3; k <= N; ++k) {
        C[k] = (C[k - 1] + C[k - 2]) % MOD;
        D[k] = (D[k - 1] + D[k - 2]) % MOD;
    }

   
    long long sumA = 0, sumB = 0;
    for (int i : A) {
        sumA = (sumA + i) % MOD;
    }
    for (int j : B) {
        sumB = (sumB + j) % MOD;
    }

    long long result = (static_cast<long long>(A.size()) * C[N] % MOD * sumA % MOD
                        + static_cast<long long>(B.size()) * D[N] % MOD * sumB % MOD) % MOD;

    return result;
}

signed main(){
 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int t;
   cin >> t;

    while (t--) {
        int M, N;
       cin >> M >> N;

       vector<int> A(M), B(M);
        for (int i = 0; i < M; ++i) {
           cin >> A[i];
        }
        for (int i = 0; i < M; ++i) {
           cin >> B[i];
        }

        long long result = sum(N, A, B);
       cout << result << endl;
    }
return 0;
}
