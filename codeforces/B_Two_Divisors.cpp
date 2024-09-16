

using namespace std;

#define endl '\n'
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin > a >> b;

        ll ans;
        ll LCM = lcm(a, b);

        if (LCM == b) {
            ans = LCM * b / a;
        } else {
            ans = LCM;
        }

        cout << ans << endl;
    }

    return 0;
}
