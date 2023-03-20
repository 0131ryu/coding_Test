#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int main()
{
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_back(3);
    cout << dq.front() << '\n'; // 1
    cout << dq.back() << '\n';  // 3
    cout << dq.size() << '\n';  // 3
    dq.pop_back();
    dq.pop_front();
    cout << dq.size() << '\n'; // 1
    return 0;
}