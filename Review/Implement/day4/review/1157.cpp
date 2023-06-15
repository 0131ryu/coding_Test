#include <bits/stdc++.h>
using namespace std;
string str;
int cnt, arr[26];
int main() {
    cin >> str;
    for(int i=0; i<str.size(); i++) {
        if(str[i] < 97) { //대문자일 때
            arr[str[i] - 65]++;
        } else { //소문자일 때
            arr[str[i] - 97]++;
        }
    }
    int max = 0, max_idx = 0;
    for(int i=0; i<26; i++) {
        if(max < arr[i]) {
            max = arr[i];
            max_idx = i;
        }
    }
    for(int i=0; i<26; i++) {
        if(max == arr[i]) {
            cnt++;
        }
    }
    if(cnt > 1) cout << "?";
    else cout << (char) (max_idx + 65) << '\n';
    return 0;
}