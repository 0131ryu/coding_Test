#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    // 1! = 0! = 1
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}
int fact1(int n)
{
    // 반복문 사용
    int ret = 1;
    for (int i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}
int fibo(int n)
{
    cout << "fibo : " << n << '\n';
    if (n == 0 || n == 1)
        return n;
    return fibo(n - 1) + fibo(n - 2); // Fn = Fn-1 + Fn-2
}
int n = 5;
int main()
{
    cout << "fibo result : " << fibo(n) << '\n';
    cout << "fact result : " << fact(n) << '\n';
    return 0;
}