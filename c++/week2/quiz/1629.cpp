#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c;
ll go(ll a, ll b)
{
    if (b == 1)
        return a % c;
    // cout << "a : " << a << ", b : " << b << '\n';
    // b는 11 -> 5 -> 2로 변함
    ll ret = go(a, b / 2);
    ret = (ret * ret) % c;
    // cout << "1. ret : " << ret << '\n';
    // 홀수값
    if (b % 2)
    {
        // cout << "홀수입니까? : " << b % 2 << '\n';
        ret = (ret * a) % c;
        // cout << "2. ret : " << ret << '\n';
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    // 함수
    cout << go(a, b) << '\n';
    return 0;
}