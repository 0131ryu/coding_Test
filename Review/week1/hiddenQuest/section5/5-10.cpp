#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int ret = 0;
    int arr[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8,
    9, 9, 9, 10, 10, 10, 10};
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        int index = s[i] - 'A';
        ret += arr[index];
    }
    cout << ret;
    return 0;
}