#include <bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};
int main()
{
    int *b = &a[0];
    int *c = a;
    cout << b << "\n";
    cout << c << "\n";
    return 0;
}