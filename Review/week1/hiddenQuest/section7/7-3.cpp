#include <bits/stdc++.h>
using namespace std;
char arr[5][15];
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // cout << arr[0][0] << arr[1][0] << arr[2][0] << arr[3][0] << arr[4][0];
            if (arr[j][i] != '\0')
            {
                cout << arr[j][i];
            }
        }
    }
    return 0;
}