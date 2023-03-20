#include <bits/stdc++.h>
using namespace std;
list<int> a;
void print(list<int> a)
{
    for (auto it : a)
        cout << it << " ";
    cout << '\n';
}

int main()
{
    for (int i = 1; i <= 3; i++)
        a.push_back(i); // 1 2 3
    for (int i = 1; i <= 3; i++)
        a.push_front(i); // 3 2 1

    auto it = a.begin();
    it++;
    a.insert(it, 1000);
    print(a); // 3 1000 2 1 1 2 3

    it = a.begin();
    it++;
    a.erase(it);
    print(a); // 3 2 1 1 2 3

    a.pop_front(); // 2 1 1 2 3
    print(a);

    a.pop_back();
    print(a);

    a.clear();
    print(a); // 아무것도 없음
    return 0;
}