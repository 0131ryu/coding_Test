#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// psum[i] = psum[i-1] + a[i];
int temp, b, c, n, k, psum[100001], ret = -1000000;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        psum[i] = psum[i - 1] + temp;
    }
    // K는 1과 N 사이의 정수이다.
    for (int i = k; i <= n; i++)
    {
        ret = max(ret, psum[i] - psum[i - k]);
    }
    cout << ret << '\n';
    return 0;
}