#include <bits/stdc++.h>
#include <atcoder/modint>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace atcoder;
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int tmp = K - (i + j);
            if (tmp >= 1 && tmp <= N)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
