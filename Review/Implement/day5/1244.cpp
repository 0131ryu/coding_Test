#include <bits/stdc++.h>
using namespace std;
bool arr[101];

int main()
{
    int switch_num;
    cin >> switch_num;
    for (int i = 1; i <= switch_num; ++i)
    {
        cin >> arr[i];
    }
    int student_num;
    cin >> student_num;
    for (int i = 0; i < student_num; i++)
    {
        int gender, location;
        cin >> gender >> location;
        if (gender == 1)
        {
            for (int j = location; j <= switch_num; j += location)
                arr[j] = !arr[j];
        }
        else if (gender == 2)
        {
            int start = location, end = location;
            while (start >= 1 && end <= switch_num)
            {
                start--, end++;
                if (arr[start] != arr[end])
                    break;
            }
            for (int j = start + 1; j <= end - 1; ++j)
                arr[j] = !arr[j];
        }
    }
    // 스위치 출력
    for (int i = 1; i <= switch_num; i++)
    {
        cout << arr[i] << " ";
        // 20번째 스위치 이후 한 번 줄 변경
        if (i % 20 == 0)
            cout << "\n";
    }
}