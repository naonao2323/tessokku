#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int N, S, A[69];
bool dp[69][10009];

int main() {
    cin >> N >> S;
    for(int i = 1; i <= N; i++) cin >> A[i];
    dp[0][0] = true;
    for(int i = 1; i <= S; i++) dp[0][i] = false;
    for(int i = 1; i<=N; i++) {
        for(int j = 0; j <= S; j++) {
            if(j < A[i]) {
                if(dp[i-1][j]==true) dp[i][j] = true;
                else dp[i][j] = false;
            }
            if(j >= A[i]) {
                if(dp[i-1][j]==true || dp[i-1][j-A[i]] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }
    }
    if(dp[N][S] == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
