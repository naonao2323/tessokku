#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> A(n), sum(n);
    rep(i, n)
    {
        cin >> A[i];
    }
    sum[0] = A[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + A[i];
    }
    rep(i, q)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << sum[r] - sum[l - 1] << endl;
    }
    return 0;
}
