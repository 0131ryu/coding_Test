#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    while (true)
    {
        string s;
        getline(cin, s);
        if (s == ".")
            break;
        stack<int> stk; // 새로운 테스트 케이스마다 stk 초기화
        bool check = true;
        for (int i = 0; i < s.length(); i++)
        { // s.size()가 아닌 s.length
            if (s[i] == ')')
            {
                if (stk.size() == 0 || stk.top() == '[')
                {
                    check = false;
                    break;
                }
                else
                {
                    stk.pop();
                }
            }
            if (s[i] == ']')
            {
                if (stk.size() == 0 || stk.top() == '(')
                {
                    check = false;
                    break;
                }
                else
                {
                    stk.pop();
                }
            }
            if (s[i] == '(')
                stk.push(s[i]);
            else if (s[i] == '[')
                stk.push(s[i]);
        }
        if (check && stk.size() == 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}