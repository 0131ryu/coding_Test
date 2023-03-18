#include <bits/stdc++.h>
using namespace std;
double a()
{
    return 1.2333;
}
int main()
{
    double ret = a();
    cout << ret << "\n";
    cout << "ret type : " << typeid(ret).name();
    return 0;
}
