// vector 1 ~ 10
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
    for (int i = 1; i < 11; i++)
        v.push_back(i);
    for (int a : v)
        cout << "a : " << a << '\n';
    v.pop_back(); // 10 지워짐

    for (int a : v)
        cout << "a2 : " << a << '\n'; // 1 ~ 9

    auto a = find(v.begin(), v.end(), 100);
    if (a == v.end())
        cout << "not found"
             << "\n";

    fill(v.begin(), v.end(), 10);
    for (int a : v)
        cout << "a3 : " << a << "\n"; // 10이 9개
    v.clear();
    cout << "아무것도 없을까?\n";
    for (int a : v)
        cout << a << "\n";
    return 0;
}