#include <bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};
int main()
{
    int *b = &a[0];
    int *c = a;
    int *d = (a + 1);
    cout << b << "\n";     // 0x404004
    cout << c << "\n";     // 0x404004
    cout << d << "\n";     // 0x404008
    cout << &a[1] << "\n"; // 0x404008
    return 0;
}