#include <bits/stdc++.h>
using namespace std;
int N, cnt;
void solve(int N)
{
    // 메인로직
    cnt++;
    cout << cnt << '\n';
    if (N == 0)
        return;
    for (int i = 0; i < 3; i++) // 3^n 만약 7일 경우 7^n
    {
        solve(N - 1);
    }
    return;
}
int main()
{
    cin >> N;
    solve(N);
    return 0;
}
// 1/2*(3^n-1) -> O(3^n)