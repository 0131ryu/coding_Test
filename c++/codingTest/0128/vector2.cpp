// p.73
#include <bits/stdc++.h>
using namespace std;
// 5개의 요소를 담을 수 있는 vector 선언하고 모든 값을 100으로 채움
vector<int> v(5, 100);
int main()
{
    for (int a : v)
        cout << a << " ";
    cout << "\n"; // 100 100 100 100 100
    return 0;
}