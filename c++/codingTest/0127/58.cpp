#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main()
{
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
    for (int i = 0; i < 5; i++)
    {
        cout << i << "번째 요소 : " << *(v.begin() + i) << "\n";
        cout << &*(v.begin() + i) << "\n";
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << '\n';
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    auto it = v.begin();
    advance(it, 3);
    cout << "\n";
    cout << *it << "\n";
}

//결과
// 0번째 요소 : 1
// 0x1017fc0
// 1번째 요소 : 2
// 0x1017fc4
// 2번째 요소 : 3
// 0x1017fc8
// 3번째 요소 : 4
// 0x1017fcc
// 4번째 요소 : 5
// 0x1017fd0
// 1 2 3 4 5 
// 1 2 3 4 5 
// 4