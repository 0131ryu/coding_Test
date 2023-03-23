#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18; // 수정정
int n, c, a[1004];
vector<pair<int, int>> v;
map<int, int> mp, mp_first;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    // 등장 횟수가 같은 경우 먼저 나온 것 우선
    if (a.first == b.first)
    {
        return mp_first[a.second] < mp_first[b.second];
    }
    return a.first > b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (mp_first[a[i]] == 0)
            mp_first[a[i]] = i + 1;
    }
    for (auto i : mp)
        v.push_back({i.second, i.first}); // 정렬 vector
    sort(v.begin(), v.end(), cmp);
    for (auto k : v)
    {
        for (int j = 0; j < k.first; j++)
        {                            // 수정
            cout << k.second << " "; // 수정정
        }
    }
    return 0;
}