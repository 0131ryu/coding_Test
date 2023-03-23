#include <bits/stdc++.h>
using namespace std;
string s;
int lcnt, vcnt;
bool isVowel(int idx)
{
    return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}
int main()
{
    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        lcnt = vcnt = 0;       // 1이 아니라 0
        int prev = -1;         // 이전 값과 비교
        bool flag = 0;         // false
        bool is_include_v = 0; // false;
        for (int i = 0; i < s.size(); i++)
        {
            int idx = s[i];
            // 모음 포함
            if (isVowel(idx))
                is_include_v = 1, lcnt++, vcnt = 0;
            // flag가 아니라 is_include_v
            else
                lcnt = 0, vcnt++;
            // 모음 3개 혹은 자음 연속 3개
            if (lcnt == 3 || vcnt == 3)
                flag = 1;
            // 같은 글자 연속속 두 번 안되나 e나 o는 허용
            if (i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o'))
            {
                flag = 1;
            }
            prev = idx;
        }
        if (is_include_v == 0)
            flag = 1;
        if (flag)
            cout << "<" << s << ">"
                 << " is not acceptable.\n";
        else
            cout << "<" << s << ">"
                 << " is acceptable.\n";
    }
    return 0;
}