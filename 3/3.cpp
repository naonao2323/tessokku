#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), r(n);
    rep(i, n) cin >> a[i];
    for(int i = 0; i < n-1; i++) {
        if(i == 0) r[i] = 0;
        else r[i] = r[i-1];

        while(r[i]< n-1 && a[r[i]+1]-a[i]<=k) {
            r[i]++;
        }
    }

    long long ans = 0;
    for(int i = 0; i < n-1; i++) ans += (r[i]-i);
    cout << ans << endl;
    return 0;
}
