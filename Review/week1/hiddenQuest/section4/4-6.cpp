#include <bits/stdc++.h>
using namespace std;
int n, m, a, b;
int arr[104];
void swap(int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        swap(a, b);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}