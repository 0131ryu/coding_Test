#include <bits/stdc++.h>
using namespace std;
int N, M;
void solve(int N, int M)
{
    int a = 1;
    for (int i = 0; i < N; i++)
    {
        a *= i;
    }
    for (int j = 0; j < M; j++)
    {
        a *= j;
    }
    cout << a << "\n";
}
int main()
{
    cin >> N >> M;
    solve(N, M);
    return 0;
}

// 시간복잡도 O(N+M)