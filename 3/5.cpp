#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int N, A[100009], B[100009];

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];
    vector<int> T;
    for(int i = 1; i <= N; i++) T.push_back(A[i]);
    sort(T.begin(), T.end());
    T.erase(unique(T.begin(), T.end()), T.end());

    for(int i = 1; i <= N; i++) {
        B[i] = lower_bound(T.begin(), T.end(), A[i]) - T.begin();
        B[i]++;
    }

    for(int i = 1; i <= N; i++) {
        if(i >= 2) cout << " ";
        cout << B[i];
    }
    cout << endl;
    return 0;
}
