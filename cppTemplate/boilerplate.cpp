#include <bits/stdc++.h>
using namespace std;

// Macros for shorthand
#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define F first
#define S second
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Constants
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;

// Utility functions
int modAdd(int a, int b, int m = MOD) { return ((a % m) + (b % m)) % m; }
int modSub(int a, int b, int m = MOD) { return ((a % m) - (b % m) + m) % m; }
int modMul(int a, int b, int m = MOD) { return ((a % m) * (b % m)) % m; }
int modExp(int a, int b, int m = MOD) {
    int res = 1;
    while (b) {
        if (b & 1) res = modMul(res, a, m);
        a = modMul(a, a, m);
        b >>= 1;
    }
    return res;
}

// GCD & LCM
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

// Prime check
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Debugging
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

void solve() {
    // Write solution here
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
