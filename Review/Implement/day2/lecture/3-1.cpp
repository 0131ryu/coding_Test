#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 5)
        {
            cout << "야호" << '\n';
        }
    }
    int i = 0;
    while (i < v.size())
    {
        if (v[i] == 5)
        {
            cout << i << '\n';
            break;
        }
        i++;
    }
    return 0;
}