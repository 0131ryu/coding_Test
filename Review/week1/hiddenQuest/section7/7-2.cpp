#include <bits/stdc++.h>
using namespace std;
int arr[104][104];
int main()
{
    int max = INT_MIN;
    int row, col;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << max << '\n';
    cout << row << " " << col;
    return 0;
}