#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int main() {
    int D, N;
    cin >> D >> N;
    D--;
    vector<int> L(N), R(N);
    for(int i = 0; i < N; i++) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        L[i] = l;
        R[i] = r;
    }
    vector<int> dayRatio(D+1), sum(D+1);
    for(int i = 0; i < N; i++) {
        dayRatio[L[i]] += 1;
        if(R[i]+1 > D) continue;
        dayRatio[R[i]+1] -= 1;
    }
    sum[0] = dayRatio[0];
    for(int i = 1; i < D+1; i++) {
        sum[i] = sum[i-1] + dayRatio[i];
    }
    for(int i = 0; i < D+1; i++) cout << sum[i] << endl;
    return 0;
}
