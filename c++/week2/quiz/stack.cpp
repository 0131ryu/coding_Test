#include <bits/stdc++.h>
using namespace std;
stack<string> stk;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stk.push("안");
    stk.push("녕");
    stk.push("하");
    stk.push("세");
    stk.push("요");
    stk.push("!");
    while(stk.size()) {
        cout << stk.top() << "\n";
        stk.pop();
    }
}