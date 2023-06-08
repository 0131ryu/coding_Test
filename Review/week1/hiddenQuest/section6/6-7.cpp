#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> alpha = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int idx;
    string str;
    cin >> str;
    for(int i=0; i<alpha.size(); i++) {
        while(true) {
            idx = str.find(alpha[i]);
            if(idx == string::npos)
                break;
            str.replace(idx,alpha[i].length(), "#");
        }
    }
    cout << str.length();
}