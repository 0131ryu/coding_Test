#include <bits/stdc++.h>
using namespace std;
int a[42], n, ret;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    for (int i = 1; i <= 10; i++)
    {
        cin >> n;
        a[n % 42]++;
        // 입력 받은 수를 42로 나눈 나머지 인덱스의 값을 증가시킨다.
        cout << "결과" << a[n % 42]++ << '\n';
    }
    for (int v : a)
    {
        if (v > 0)
        {
            ret++;
        }
    }
    cout << ret;
    return 0;
}