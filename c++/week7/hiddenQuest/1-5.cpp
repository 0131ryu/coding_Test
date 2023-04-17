#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char b[4];

    scanf("%d", &a);
    scanf("%s", b);

    printf("%d\n", a * (b[2] - '0'));
    printf("%d\n", a * (b[1] - '0'));
    printf("%d\n", a * (b[0] - '0'));
    printf("%d\n", a * atoi(b));
    return 0;
}