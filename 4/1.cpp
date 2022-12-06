#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 1; i < n; i++) cin >> a[i];
    for(int i = 2; i < n; i++) cin >> b[i];
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = a[1];
    for(int i = 2; i < n; i++) {
        dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);
    }
    cout << dp[n-1] << endl;
    return 0;
}
