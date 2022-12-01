#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int N;
vector<int> A;

int search(int x) {
    int L = 0, R = N-1;
    while(L <= R) {
        int M = (L+R)/2;
        if(x > A[M]) L = M+1;
        if(x == A[M]) return M;
        if(x < A[M]) R = M-1;
    }
    return -1;
}

int main(){
    int X;
    cin >> N >> X;
    A = vector<int>(N);
    rep(i, N) cin >> A[i];
    int answer = search(X);
    cout << answer+1 << endl;
    return 0;
}
