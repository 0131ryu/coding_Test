#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, a[9], maxIndex;
    int max = INT_MIN;
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 9; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxIndex = i + 1;
        }
    }
    cout << max << '\n';
    cout << maxIndex << '\n';
    return 0;
}