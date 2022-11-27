#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    set<int> A;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        A.insert(tmp);
    }
    if (A.count(x))
    {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
