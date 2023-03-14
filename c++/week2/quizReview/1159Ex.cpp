#include <bits/stdc++.h>
using namespace std;
int cnt[3];
string a;
int main()
{
    cin >> a;
    for (int i = 0; i < 3; i++)
    {
        cout << "cnt[a[0] - 'a']++" << cnt[a[0] - 'a']++ << "\n";
    }
    return 0;
}
// abc
// cnt[a[0] - 'a']++0
// cnt[a[0] - 'a']++1
// cnt[a[0] - 'a']++2