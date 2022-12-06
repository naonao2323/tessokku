#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

long long N, W, w[109], v[109];
long long dp[109][100009];

int main() {
    cin >> N >> W;
    for(int i = 1; i <= N; i++) cin >> w[i] >> v[i];
    dp[0][0] = 0;
    for(int i = 1; i<=N; i++) {
        for(int j = 0; j <= W; j++) {
            if(j < w[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
        }
    }

    long long Answer = 0;
    for(int i = 0; i <= W; i++) Answer = max(Answer, dp[N][i]);
    cout << Answer << endl;
    return 0;
}
