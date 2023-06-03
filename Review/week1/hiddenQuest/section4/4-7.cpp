#include <bits/stdc++.h>
using namespace std;
int a[30], n;
int main() {
    for(int i=1; i<=28; i++) {
        cin >> n;
        a[n] = 1;
    }
    for(int i=1; i<=30; i++) {
        if(a[i] != 1) {
            cout << i << '\n';
        }
    }
    return 0;
}