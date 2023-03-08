#include <bits/stdc++.h>
using namespace std;
int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};
// 아무것도 리턴하지 않는 함수: void
void printV(vector<int> b)
{
    for (int i : b)
        cout << i << " ";
    cout << '\n';
}
void combi(int start, vector<int> b)
{
    if (b.size() == k) // 문자열의 사이즈
    {
        printV(b);
        return;
    }
    // b.size() !== k
    for (int i = start + 1; i < n; i++)
    {
        // cout << "i : " << i << '\n';
        b.push_back(i); // vector의 뒤에서부터 요소를 더합니다
        combi(i, b);
        b.pop_back(); // vector의 맨 뒤의 요소를 지웁니다.
    }
    return;
}
int main()
{
    vector<int> b;
    // combi(0, b); //0부터 시작 시 결과는 4개만 나옴
    // combi(1, b); //1부터 시작 시 결관느 1개만 나옴(2, 3, 4)
    combi(-1, b);
    return 0;
}