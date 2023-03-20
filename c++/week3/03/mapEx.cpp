#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
string a[] = {"정우성", "이명헌", "신현철"};
int main()
{
    for (int i = 0; i < 3; i++)
    {
        mp.insert({a[i], i + 1});
        mp[a[i]] = i + 1;
    }
    cout << mp["ace"] << "\n";
    mp["ace"] = 9;
    cout << mp.size() << '\n';
    mp.erase("ace");
    auto it = mp.find("ace");
#include <bits/stdc++.h>
    using namespace std;
    map<string, int> mp;
    string a[] = {"정우성", "이명헌", "신현철"};
    int main()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << a[i] << '\n';
            mp.insert({a[i], i});
            mp[a[i]] = i + 1;
        }
        cout << mp["ace"] << '\n';

        mp["ace"] = 1;
        cout << mp.size() << '\n';
        mp.erase("ace");
        auto it = mp.find("ace");
        if (it == mp.end())
        {
            cout << "못 찾음" << '\n';
        }
        it = mp.find("ace");
        for (auto it : mp)
        {
            cout << "for(auto) : " << (it).first << " : " << (it).second << '\n';
        }
        if (it != mp.end())
        {
            cout << "이거 나와요?" << '\n'; // 안 나와용
            cout << (*it).first << " : " << (*it).second << '\n';
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << (*it).first << " : " << (*it).second << '\n';
        }
        mp.clear();
        return 0;
    }
    if (it == mp.end())
    {
        cout << "못 찾겠네 꾀꼬리\n";
    }
    mp["ace"] = 100;
    if (it != mp.end())
    {
        cout << (*it).first << " : " << (*it).second << '\n';
    }
    for (auto it : mp)
    {
        cout << (it).first << " : " << (it).second << '\n';
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << '\n';
    }
    mp.clear();
    return 0;
}