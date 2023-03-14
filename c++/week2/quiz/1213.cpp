#include <bits/stdc++.h>
using namespace std;
string s, ret;
int cnt[200], flag;
char mid;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    for (char a : s)
        cnt[a]++; // 카운팅배열(문자를 카운팅, 문자를 재배열)
    for (int i = 'Z'; i >= 'A'; i--)
    { // 오름차순이므로 "Z"부터 시작
        if (cnt[i])
        {
            if (cnt[i] & 1)
            {                  // 홀수라는 뜻(%2 == 1), 짝수는 || 0
                mid = char(i); // 홀수가 1개일 경우 중앙에 배치하기 위함
                flag++;
                cnt[i]--;
            }
            if (flag == 2)
                break;
            for (int j = 0; j < cnt[i]; j += 2)
            { // 팰린드롬으로 붙이기
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    if (mid)
        ret.insert(ret.begin() + ret.size() / 2, mid);
    if (flag == 2)
        cout << "I'm Sorry Hansoo\n"; // 홀수가 2개 이상일 경우 불가능
    else
        cout << ret << '\n';
}