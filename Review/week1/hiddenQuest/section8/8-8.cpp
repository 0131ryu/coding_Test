#include <bits/stdc++.h>
using namespace std;
int num1[10004], num2[10004], sum;
string s1, s2, temp;
vector<int> ans;
int main()
{
	cin >> s1 >> s2;
	// s1에 더 큰 수 저장
	if (s1.size() < s2.size())
	{
		temp = s1;
		s1 = s2;
		s2 = temp;
	}
	// num1, num2 배열을 만드는 과정정
	for (int i = 0; i < s1.size(); i++)
	{
		num1[i + 1] = s1[i] - '0';
	}
	for (int i = 0; i < s2.size(); i++)
	{
		num2[i + 1 + (s1.size() - s2.size())] = s2[i] - '0';
	}
	// num 1배열들의 끝부분부터 덧셈, ans백터에 저장
	for (int i = s1.size(); i > 0; i--)
	{
		sum = num1[i] + num2[i];
		if (sum >= 10)
		{
			num1[i - 1]++;
			sum -= 10;
		}
		ans.push_back(sum);
	}
	// 맨 앞자리 수 출력
	if (num1[0] != 0)
		cout << 1;
	// ans 백터 거꾸로 출력
	for (int i = ans.size() - 1; i >= 0; i--)
	{
		cout << ans[i];
	}

	return 0;
}