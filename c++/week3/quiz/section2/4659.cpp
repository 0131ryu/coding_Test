#include <bits/stdc++.h>
using namespace std;
string s;
int lcnt, vcnt; // lcnt = 모음 몇 번? vcnt = 자음 몇 번?
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
        lcnt = vcnt = 0;
        bool flag = 0;
        bool is_include_v = 0; // 모음 포함 여부
        int prev = -1;
        // 1. 모음 포함
        for (int i = 0; i < s.size(); i++)
        {
            int idx = s[i]; // 단어들의 개별 알파벳 넣기
            // cout << "s[i] : " << s[i] << '\n';
            if (isVowel(idx))
                lcnt++, vcnt = 0, is_include_v = 1; // 모음 있는 경우
            else
                vcnt++, lcnt = 0; // 자음 있는 경우
            // 2. 모음 또는 자음이 연속 3개 포함 안 되게 하기
            if (vcnt == 3 || lcnt == 3)
                flag = 1;
            // 3. 같은 글자가 연속 2번 불가능하게 하기(ee, oo 제외)
            if (i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o'))
                flag = 1;
            prev = idx;
        }
        if (is_include_v == 0)
            flag = 1;
        if (flag)
        { // 3가지 조건 중 한 개라도 포함 시 not
            cout << "<" << s << ">"
                 << "is not acceptable\n";
        }
        else
        {
            cout << "<" << s << ">"
                 << "is acceptable\n";
        }
    }
    return 0;
}