#include <bits/stdc++.h>
using namespace std;
int c, n, score[1004], avg, cnt;
double ret;
int main()
{
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> n;
        avg = 0;
        cnt = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> score[j];
            avg = avg + score[j];
        }
        avg = avg / n;
        //   cout << "avg : " << avg << '\n';
        for (int j = 0; j < n; j++)
        {
            if (avg < score[j])
            {
                cnt++;
            }
        }
        ret = (double)cnt / n * 100;
        cout << fixed;
        cout.precision(3);
        cout << ret << "%" << '\n';
    }
    return 0;
}
