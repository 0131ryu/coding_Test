#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    for (int i = 0; i <= 5; i++)
        v.push_back({i, i});
    for (auto it : v)
        cout << "it.first : " << it.first << " it.second : " << it.second << '\n';
    for (pair<int, int> it : v)
        cout << "pair => it.first : " << it.first << " it.second : " << it.second << '\n';
    return 0;
}