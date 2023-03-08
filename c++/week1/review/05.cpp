#include <bits/stdc++.h>
using namespace std;
// vector의 정적할당
vector<string> split(string input, string delimiter)
{
    vector<string> ret;
    long long pos = 0;
    string token = "";
    // find : 특정 문자열을 찾아 위치를 반환합니다.
    // 만약 해당 문자열을 못 찾을 경우 string::npos를
    // 반환하며 O(n)의 시간복잡도를 가집니다

    // 문자열을 찾을 경우
    while ((pos = input.find(delimiter)) != string::npos)
    {
        // substr(위치, 크기)
        // 특정 위치에서 크기만큼의 문자열을 추출
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}
int main()
{
    string s = "abcdabc", d = "d";
    vector<string> a = split(s, d);
    for (string b : a)
        cout << b << '\n';
}