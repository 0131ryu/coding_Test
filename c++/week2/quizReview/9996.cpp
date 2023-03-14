#include <bits/stdc++.h>
using namespace std;
int n;
string s, ori_s, pre, suf;
int main()
{
    cin >> n;
    cin >> ori_s;
    int pos = ori_s.find("*");
    // cout << "pos" <<  pos << '\n';
    pre = ori_s.substr(0, pos);
    suf = ori_s.substr(pos + 1);
    // cout << "pre" << pre << '\n';
    //  cout << "suf : " << suf << '\n';
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (pre.size() + suf.size() > s.size())
        {
            cout << "NE" << '\n';
        }
        else
        {
            // cout << "결과 : " << s.substr(0, pre.size()) << "\n";
            // cout << "pre 결과 : " << s.substr(0, pre.size()) << '\n';
            // cout << "suf 결과 : " << s.substr(s.size() - suf.size()) << '\n';
            if (s.substr(0, pre.size()) == pre &&
                s.substr(s.size() - suf.size()) == suf)
            {
                cout << "DA" << '\n';
            }
            else
            {
                cout << "NE" << '\n';
            }
        }
    }
    return 0;
}