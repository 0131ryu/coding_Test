#include <bits/stdc++.h>
using namespace std;
int n;
string s, ori_s, pre, suf;
int main()
{
    cin >> n;
    cin >> ori_s;
    int pos = ori_s.find("*");
    pre = ori_s.substr(0, pos);
    suf = ori_s.substr(pos + 1);
    // cout << "pre : " << pre << '\n';
    // cout << "pre.size() : " << pre.size() << '\n';
    // cout << "suf : " << suf << '\n';
    // cout << "suf.size() : " << suf.size() << '\n';
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (pre.size() + suf.size() > s.size())
        { // 조건보다 작을 때
            cout << "NE\n";
        }
        else
        {
            if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size()))
                cout << "DA\n";
            else
                cout << "NE\n";
        }
    }
    return 0;
}