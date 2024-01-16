#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, cnt = 0;
	string s;
	cin >> n;

	
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		stack<char> stk;
		for(char ch : s)
		{
			if (stk.empty())
			{
				stk.push(ch);
			}
			else
			{
				if (ch == stk.top()) stk.pop();
				else stk.push(ch);
			}
		}

		if (stk.empty()) cnt++;
	}

	cout << cnt << endl;
	return 0;
}
