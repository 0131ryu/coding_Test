// p.70
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
    for (int i = 1; i <= 10; i++)
        v.push_back(i);
    for (int a : v)
        cout << a << " ";
    cout << "\n"; // 1 2 3 4 5 6 7 8 9 10
    v.pop_back();

    for (int a : v)
        cout << a << " ";
    cout << "\n"; // 1 2 3 4 5 6 7 8 9

    v.erase(v.begin(), v.begin() + 3);
    for (int a : v)
        cout << a << " ";
    cout << "\n"; // 4 5 6 7 8 9

    auto a = find(v.begin(), v.end(), 100);
    if (a == v.end())
        cout << "not found" // not found
             << "\n";

    fill(v.begin(), v.end(), 10);
    for (int a : v)
        cout << a << " ";
    cout << "\n"; // 10 10 10 10 10 10
    v.clear();
    cout << "아무것도 없을까?\n";
    for (int a : v)
        cout << a << " ";
    cout << "\n"; // 아무것도 없을까?
    return 0;
}