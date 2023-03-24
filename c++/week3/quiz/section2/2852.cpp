#include <bits/stdc++.h>
using namespace std;
#define prev aaa
int n, o, A, B, asum, bsum;
string s, prev;
string print(int a)
{                                        // 90
    string d = "00" + to_string(a / 60); // 001
    string e = "00" + to_string(a % 60); // 0030
    return d.substr(d.size() - 2, 2) + ":" + e.substr(e.size() - 2, 2);
}
int changeToInt(string s)
{ // 분 초로 바꾸기(20:00)
    return atoi(s.substr(0, 2).c_str()) * 60 + atoi(s.substr(3, 2).c_str());
}
void go(int &sum, string s)
{
    sum += (changeToInt(s) - changeToInt(prev));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> o >> s;
        if (A > B)
            go(asum, s);
        else if (B < A)
            go(bsum, s);
        o == 1 ? A++ : B++; // 추가해야 함
        prev = s;
    }
    if (A > B)
        go(asum, "48:00");
    else if (B < A)
        go(bsum, "48:00");
    cout << print(asum) << '\n';
    cout << print(bsum) << '\n';
}