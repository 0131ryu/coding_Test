#include <bits/stdc++.h>
using namespace std;
int t, n, num, avg, score[1004];
double ret;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        num = 0;
        avg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> score[i];
            avg = avg + score[i];
        }
        avg = avg / n;
        for (int i = 0; i < n; i++)
        {
            if (score[i] > avg)
            {
                num++;
            }
        }
        ret = (double)num / n * 100;
        cout << fixed;
        cout.precision(3);
        cout << ret << "%" << '\n';
    }
    return 0;
}