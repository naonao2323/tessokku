#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int x = 9; x >= 0; x--)
    {
        int wari = (1 << x);
        cout << (N / wari) % 2;
    }
    cout << endl;
    return 0;
}
