#include <bits/stdc++.h>
using namespace std;
int n, newScore, p;
int main()
{
    cin >> n >> newScore >> p;
    int score[100];
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    int count = 0;
    int ret = 1;
    for (int i = 0; i < n; i++)
    {
        if (score[i] > newScore)
        {
            ret++;
        }
        else if (score[i] == newScore)
        {
            ret = ret;
        }
        else
        {
            break;
        }
        count++;
    }
    // cout << count << '\n';
    if (count == p)
    {
        ret = -1;
    }
    if (count == 0)
    {
        ret = 1;
    }
    cout << ret;
    return 0;
}