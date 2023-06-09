#include <bits/stdc++.h>
using namespace std;
map<string, double> mp;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    mp.insert({"A+", 4.5});
    mp.insert({"A0", 4.0});
    mp.insert({"B+", 3.5});
    mp.insert({"B0", 3.0});
    mp.insert({"C+", 2.5});
    mp.insert({"C0", 2.0});
    mp.insert({"D+", 1.5});
    mp.insert({"D0", 1.0});
    mp.insert({"F", 0.0});

    double result = 0;
    double score_sum = 0;

    for (int i = 1; i <= 20; i++)
    {
        string name;
        double score;
        string grade;
        cin >> name >> score >> grade;
        if (grade == "P")
            continue;
        result += score * mp[grade];
        score_sum += score;
    }
    result /= score_sum;

    cout << fixed << setprecision(6);
    cout << result;

    return 0;
}