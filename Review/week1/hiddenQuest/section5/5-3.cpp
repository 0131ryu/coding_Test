#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int lastInt = s.size();
        cout << s[0] << s[lastInt - 1] << '\n';
    }
    return 0;
}