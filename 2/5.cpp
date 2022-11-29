#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int N, A[100009], P[100009], Q[100009];
int D, L[100009], R[100009];

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];
    cin >> D;
    for(int i = 1; i <= D; i++) cin >> L[i] >> R[i];

    P[1] = A[1];
    for(int i = 2; i<=N; i++) P[i] = max(P[i-1], A[i]);
    Q[N] = A[N];
    for(int i = N-1; i >= 1; i--) Q[i] = max(Q[i+1], A[i]);

    for(int i=1; i<=D; i++) {
        cout << max(P[L[i]-1], Q[R[i]+1]) << endl;
    }
    return 0;
}
