

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e6;
int n, cnt;
int main()
{
    cin >> n;
    for (int i = 2400; i < INF; i++)
    {
        string a = to_string(i);
        if (a.find("2400") != string::npos)
        {
            cnt++;
            if (cnt == n)
            {
                cout << a << '\n';
                break;
            }
            //   cout << cnt << " : " << a << '\n';
        }
    }
    return 0;
}