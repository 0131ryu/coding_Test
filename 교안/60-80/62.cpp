#include <bits/stdc++.h>
using namespace std;
int a[10];
int b[10][10];
int main()
{
    cout << "case 1" << '\n';
    fill(&a[0], &a[10], 100);

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';

    cout << "case 2" << '\n';
    fill(&b[0][0], &b[9][10], 2);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}