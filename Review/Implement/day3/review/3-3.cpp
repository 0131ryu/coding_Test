#include <bits/stdc++.h>
using namespace std;
int n, temp, ret;
vector<int> v;
const int mode = 11;
int cnt = 0;
void go(int idx, int sum)
{
    if (idx == n)
    {
        ret = max(ret, sum % mode); // 초기값 주의
        cnt++;
        return;
    }
    go(idx + 1, sum + v[idx]);
    go(idx + 1, sum);
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    go(0, 0);
    cout << ret << '\n'; // 10
    cout << cnt << '\n'; // 1024
    return 0;
}