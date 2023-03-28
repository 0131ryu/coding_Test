#include <bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};
int main()
{
    int *b = &a[0];
    int *c = a;
    cout << b << "\n"; // 0x404004
    cout << c << "\n"; // 0x404004
    return 0;
}