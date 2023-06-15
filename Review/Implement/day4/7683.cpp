#include <bits/stdc++.h>
using namespace std;
string input;
bool checkX(char map[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        // 가로 체크
        if (map[i][0] == 'X' && map[i][0] == map[i][1] && map[i][1] == map[i][2])
            return true;

        // 세로체크
        if (map[0][i] == 'X' && map[0][i] == map[1][i] && map[1][i] == map[2][i])
            return true;
    }
    // 대각선
    if (map[0][0] == 'X' && map[0][0] == map[1][1] && map[1][1] == map[2][2])
        return true;

    if (map[0][2] == 'X' && map[0][2] == map[1][1] && map[1][1] == map[2][0])
        return true;

    return false;
}
bool checkO(char map[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        // 가로 체크
        if (map[i][0] == 'O' && map[i][0] == map[i][1] && map[i][1] == map[i][2])
            return true;

        // 세로체크
        if (map[0][i] == 'O' && map[0][i] == map[1][i] && map[1][i] == map[2][i])
            return true;
    }
    // 대각선
    if (map[0][0] == 'O' && map[0][0] == map[1][1] && map[1][1] == map[2][2])
        return true;

    if (map[0][2] == 'O' && map[0][2] == map[1][1] && map[1][1] == map[2][0])
        return true;

    return false;
}
int main()
{
    while (true)
    {
        char map[3][3];
        cin >> input;
        if (input == "end")
            break;

        int x = 0;
        int o = 0;
        for (int i = 0; i < 9; i++)
        {
            map[i / 3][i % 3] = input[i];
            if (input[i] == 'X')
                x++;
            else if (input[i] == 'O')
                o++;
        }
        bool isX = checkX(map);
        bool isO = checkO(map);

        // X가 이겼을 때
        if (isX && !isO && x == o + 1)
            cout << "valid\n";
        // O가 이겼을 때
        else if (isO && !isX && x == o)
            cout << "valid\n";
        // 가득 찬 경우
        else if (!isX && !isO && x == 5 && o == 4)
            cout << "valid\n";
        // 모두 포함 안 됨
        else
            cout << "invalid\n";
    }
    return 0;
}