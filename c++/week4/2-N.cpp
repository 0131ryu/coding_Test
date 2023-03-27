#include <bits/stdc++.h>
using namespace std;
int n;
string s;
bool(string s)
{
    // 짝짓기는 stack
    // 문자열 s가 올바른 괄호짝이 있는지 확인
    // s가 반복문을 돌면서 "("가 있으면 스택에 넣고 ")"가 나오면 스택에서 pop
    stack<char> stk; // string이 아닌 char값 써야 함
    for (char c : s)
    {
        if (c == "(")
            stk.push(c);
        else
        {
            if (!stk.empty())
                stk.pop();
            else
                return false; // 스택이 비었는데 괄호가 나온 경우 fasle 반환
        }
    }
    return stk.empty(); // 스택이 비었는지 확인함, 비었다면 true, 아니면 false
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (check(s))
            cout << "YES\n";
        else
            "NO\n";
    }
    return 0;
}