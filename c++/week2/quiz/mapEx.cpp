#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
map<string, string> mp2;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    if (mp.find(1) == mp.end())
    {
        mp[1] = 2;
    }
    for (auto i : mp)
        cout << "i.first : " << i.first
             << " "
             << "i.second : " << i.second;
    return 0;
}