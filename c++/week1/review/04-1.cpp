#include <bits/stdc++.h>
using namespace std;
int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};
void printV(vector<int> b)
{
    for (int i : b)
        cout << i << " ";
    cout << '\n';
}
void combi(int start, vector<int> b)
{
    if (b.size() == k)
    {
        printV(b);
        return;
    }
    for (int i = start + 1; i < n; i++)
    {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}
int main()
{
    vector<int> b;
    combi(-1, b);
    return 0;
}

// for (int i = start; i < n; i++)과
// int main()에 있는 combi(0, b)할 경우 중복된 값이 출력됨