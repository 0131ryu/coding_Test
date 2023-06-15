#include <bits/stdc++.h>
using namespace std;
int p, t, temp, student[20], ret;
int main()
{
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> t;
        ret = 0;
        for (int i = 0; i < 20; i++)
        {
            cin >> student[i];
        }
        for (int i = 0; i < 20; i++)
        {
            for (int j = i + 1; j < 20; j++)
            {
                // cout << "student[i] : " << student[i] << '\n';
                // cout << "student[j] : " << student[j] << '\n';
                if (student[i] > student[j])
                {
                    ret++;
                }
            }
        }
        cout << t << " " << ret << '\n';
    }
    return 0;
}