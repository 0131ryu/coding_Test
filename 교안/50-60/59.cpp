#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main()
{
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
    for (int i = 0; i < 5; i++)
    {
        cout << i << "번째 요소 : " << *(v.begin() + i) << '\n';
        cout << "결과1는? " << &*(v.begin() + i) << '\n';
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << "결과2는? " << *it << ' ';
    }
    cout << '\n';
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "결과3는? " << *it << ' ';
    }
    auto it = v.begin();
    advance(it, 3);
    cout << '\n';
    cout << "결과4는? " << *it << '\n';
}