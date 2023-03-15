#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main()
{
    while (scanf("%d", &n) != EOF)
    {
        int cnt = 1, ret = 1;
        while (true)
        {
            // cout << "cnt : " << cnt << '\n';
            // cout << "n : " << n << '\n';
            // cout << "cnt % n 결과는 : " << cnt % n << '\n';
            if (cnt % n == 0)
            {
                // cout << "ret : " << ret << '\n';
                // 최종 결과
                printf("%d\n", ret);
                break;
            }
            else
            {
                // 2와 4로 나누어 떨어지지 않는 정수 나오게 하기기
                cout << "cnt : " << cnt << '\n';
                cnt = (cnt * 10) + 1;
                cnt %= n;
                ret++;
            }
        }
    }
}

// cnt : 1
// n : 9901
// cnt % n 결과는 : 1
// cnt : 11
// n : 9901
// cnt % n 결과는 : 11
// cnt : 111
// n : 9901
// cnt % n 결과는 : 111
// cnt : 1111
// n : 9901
// cnt % n 결과는 : 1111
// cnt : 1210
// n : 9901
// cnt % n 결과는 : 1210
// cnt : 2200
// n : 9901
// cnt % n 결과는 : 2200
// cnt : 2199
// n : 9901
// cnt % n 결과는 : 2199
// cnt : 2189
// n : 9901
// cnt % n 결과는 : 2189
// cnt : 2089
// n : 9901
// cnt % n 결과는 : 2089
// cnt : 1089
// n : 9901
// cnt % n 결과는 : 1089
// cnt : 990
// n : 9901
// cnt % n 결과는 : 990
// cnt : 0
// n : 9901
// cnt % n 결과는 : 0
// ret : 12