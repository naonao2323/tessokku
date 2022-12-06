#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int N, P[2009], A[2009];
int dp[2009][2009];

int main() {
    cin >> N;
    for(int i = 1; i<=N; i++) cin >> P[i] >> A[i];
    dp[1][N] = 0;
    //LENはn-2でも(n-1)-1でもどっちでも良い。
    //とりあえず配列からひとつ取り除いた、大きいLENから求めていていく。
    for(int LEN = N-2; LEN>=0; LEN--) {
        for(int l = 1; l<=N-LEN; l++) {
            int r = l+LEN;

            int score1 = 0;
            if(l<=P[l-1]&&P[l-1]<=r) score1 = A[l-1];

            int score2 = 0;
            if(l<=P[r+1]&&P[r+1]<=r) score2 = A[r+1];

            if(l == 1) {
                dp[l][r] = dp[l][r+1]+score2;
            }
            else if(r == N) {
                dp[l][r] = dp[l-1][r]+score1;
            }
            else {
                dp[l][r] = max(dp[l][r+1]+score2, dp[l-1][r]+score1);
            }
        }
    }
    int Answer = 0;
    for(int i = 1; i<=N; i++) Answer = max(Answer, dp[i][i]);
    cout << Answer << endl;
    return 0;
}
