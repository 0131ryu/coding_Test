// 112
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "정렬되어 있지 않은 배열 기반\n";
    int a[] = {1, 3, 2};
    do
    {
        for (int i : a)
            cout << i << " ";
        cout << "\n";
    } while (next_permutation(a, a + 3));
    cout << "정렬된 배열 기반\n";
    int b[] = {1, 2, 3};
    do
    {
        for (int i : b)
            cout << i << " ";
        cout << "\n";
    } while (next_permutation(b, b + 3));
}