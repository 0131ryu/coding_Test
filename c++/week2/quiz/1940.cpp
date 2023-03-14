#include <bits/stdc++.h>
using namespace std;
int n, m, a[15001], cnt; // n <= 15000
// n개의 재료 중 2개를 고름(고유한 번호(10만 이하)를 가짐)
// n개 중 두 개의 합이 m인 것을 counting (combination(순서 상관없음))
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // 이 if문은 없어도됨. but, 설명을 위해.
    if (m > 200000)
        cout << 0 << "\n";
    // 10만 이하 두 개를 선택하는데 20만 이상일 경우 오류 => 0
    else
    {
        for (int i = 0; i < n; i++)
        { // 중첨 for 문
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] == m)
                    cnt++;
            }
        }
        cout << cnt << "\n";
    }
}