#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
int n, c, a[1004];
vector<pair<int, int>> v;
map<int, int> mp, mp_first;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.second)
    {
        return mp_first[a.second] < mp_first[b.second];
    }
    return a.first > b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        // cout << "mp_first[a[i]] : " << mp_first[a[i]] << '\n';
        if (mp_first[a[i]] == 0)
            mp_first[a[i]] = i + 1;
        // cout << "mp_first[a[i]] 값 할당 : " << mp_first[a[i]] << '\n';
    }
    for (auto it : mp)
    {
        v.push_back({it.second, it.first});
        // cout << "it.second : " << it.second << '\n';
        // cout << "it.first : " << it.first << '\n';
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v)
    {
        for (int j = 0; j < i.first; j++)
        {
            cout << i.second << " ";
        }
    }
    return 0;
}