#include <bits/stdc++.h>
using namespace std;
vector<int> v{2, 3, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9};
int main()
{
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i : v)
        cout << i << " ";
    cout << '\n';
    // 1 2 3 5 6 7 8 9
    return 0;
}
