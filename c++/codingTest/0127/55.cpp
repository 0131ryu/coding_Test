#include <bits/stdc++.h>
using namespace std;
pair<int, int> a = {1, 2};
int main()
{
    pair<int, int> *b = &a;
    cout << b << "\n";          // 0x404004
    cout << b->first << "\n";   // 1
    cout << (*b).first << "\n"; // 1
    return 0;
}