#include <bits/stdc++.h>
using namespace std;
int N, cnt;
void solve(int N)
{
    int a = 0, i = N;
    while (i > 0)
    {
        a += i;
        i /= 2; // 계속 2로 나눔
        cnt++;
    }
    cout << a << '\n';
    cout << cnt << '\n';
}
int main()
{
    cin >> N;
    solve(N);
    return 0;
}

// log_2n+1 -> O(log_2n)