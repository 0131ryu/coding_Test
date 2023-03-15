#include <bits/stdc++.h>
using namespace std;
int n, ret;
string str;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> str;
        stack<char> stk; //매번 stack을 새로 정의해야 함
        for(char a : str) {
            if(stk.size() && stk.top() == a)stk.pop(); //스택 사이즈를 체크하고 top을 체크해야 함
            else stk.push(a);
        } 
        if(stk.size() == 0)ret++;
    }
    cout << ret << '\n';
}

//짝짓기, 폭발 -> stack 생각하기