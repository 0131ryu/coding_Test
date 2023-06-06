#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, r;
    string s;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> r >> s;
        for(char c : s) {
            for(int i=0; i<r; i++) {
                cout << c;
            }
        }
        cout << '\n';
    }
}