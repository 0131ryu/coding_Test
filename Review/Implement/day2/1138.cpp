#include <bits/stdc++.h>
using namespace std;
int n, leftNum;
int arr[10];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> leftNum;
        for (int j = 0; j < n; j++)
        {
            // cout << arr[j] <<  " ";
            // cout << '\n';
            // cout << "j : " << j << '\n';
            if (arr[j] == 0 && leftNum == 0)
            { // 자기 앞에 아무도 없고 빈자리일 경우
                arr[j] = i + 1;
                break;
            }
            else if (arr[j] == 0)
            { // 자기 앞에 사람이 더 있으면 한 칸씩 뒤로 가면서 left가 0이 될 때까지 계속 뒤로 가기기
                leftNum--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}