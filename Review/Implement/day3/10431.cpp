#include <bits/stdc++.h>
using namespace std;
int t, p, ret;
int student[20];
int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> p;
        ret = 0;
        for (int i = 0; i < 20; i++)
        {
            cin >> student[i];
        }
        for (int i = 0; i < 20; i++)
        {
            for (int j = i; j < 20; j++)
            {
                if (student[i] > student[j])
                {
                    ret += 1;
                }
            }
        }
        cout << p << " " << ret << '\n';
    }
    return 0;
}