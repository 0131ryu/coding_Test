#include <bits/stdc++.h>
using namespace std;
int T;
string a = "도랄팍 화이팅!";
string b = "윤하 노래 너무 좋다...";
typedef long long ll;
double c = 1.23456789;
int main()
{
    cout << a << '\n';
    cout << a << " "
         << " " << b << '\n';
    cout << c << '\n';
    cout.precision(7); // 1.23457
    cout << c << '\n'; // 1.234568
    return 0;
}