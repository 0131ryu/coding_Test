#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
void printV(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << "v[i]" << v[i] << " "; // v[i]는 1 2 3 순열로 돌린 값이 나옴
    }
    cout << '\n';
}

int main()
{
    int a[3] = {1, 2, 3};
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        cout << "a" << a << '\n';       // a는 메모리값이 나옴
        cout << "a[i]" << a[i] << '\n'; // a[i] => 1, 2, 3이 나옴(반복문)
        v.push_back(a[i]);
    }
    do
    {
        printV(v);
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}