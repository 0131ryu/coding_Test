#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++)
    {
        cin >> n;
        cout << arr[i] - n << " ";
    }
    return 0;
}