#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int idx;
    vector<string> words = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    cin >> s;
    for (int i = 0; i < words.size(); i++)
    {
        while (true)
        {
            idx = s.find(words[i]);
            if (idx == string::npos)
            {
                break;
            }
            s.replace(idx, words[i].length(), "#");
        }
    }
    cout << s.length() << '\n';
    return 0;
}