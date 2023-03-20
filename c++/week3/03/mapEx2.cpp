#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
map<string, string> mp2;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    if (mp.find(1) == mp.end())
    {
        cout << "나오나요?" << '\n'; // 나와용용
        mp[1] = 2;
    }
    for (auto it : mp)
        cout << it.first << " : " << it.second;
    return 0;
}