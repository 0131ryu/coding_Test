// p.74
// 2차원 배열 만들기
#include <bits/stdc++.h>
using namespace std;
// vector 중첩해서 만든 v
vector<vector<int>> v;
// vector를 중첩해서 만들고 0이라는 값으로 초기화
vector<vector<int>> v2(10, vector<int>(10, 0));
vector<int> v3[10];
int main()
{
    for (vector<int> v : v2)
    {
        for (int i : v)
            cout << "결과 : " << i << " ";
        cout << "\n";
    }
    for (int i = 0; i < 10; i++)
    {
        vector<int> vv;
        v.push_back(vv);
    }
    return 0;
}

// 결과
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0
//  0 0 0 0 0 0 0 0 0 0