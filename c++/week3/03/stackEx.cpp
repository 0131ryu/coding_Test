#include <bits/stdc++.h>
using namespace std;
stack<string> stk;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stk.push("팅");
    stk.push("이");
    stk.push("화");
    stk.push("고");
    stk.push("공");
    stk.push("왕");
    stk.push("산");
    cout << stk.size() << '\n';
    while (stk.size())
    {
        cout << stk.top() << '\n'; // 산왕공고화이팅
        stk.pop();
        // cout << stk.top() << '\n'; //Segmentation fault
    }
}