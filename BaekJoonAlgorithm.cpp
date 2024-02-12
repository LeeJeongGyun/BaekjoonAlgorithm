
#include <bits/stdc++.h>
using namespace std;

int n;
char a[101][101];

string quard(int y, int x, int size)
{
	if (size == 1) return string(1, a[y][x]);
	char b = a[y][x];
	string ret = "";
	bool flag = false;
	for (int yy = y; yy < y + size; ++yy)
	{
		for (int xx = x; xx < x + size; ++xx)
		{
			if (b != a[yy][xx])
			{
				ret += '(';
				// 4개로 쪼개진다.
				int newSize = size / 2;
				ret += quard(y, x, newSize);
				ret += quard(y, x + newSize, newSize);
				ret += quard(y + newSize, x, newSize);
				ret += quard(y + newSize, x + newSize, newSize);
				ret += ')';
				return ret;
			}
		}
	}

	return string(1, a[y][x]);
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); ++j)
		{
			a[i][j] = s[j];
		}
	}
	
	string ans = quard(0, 0, n);
	cout << ans << endl;
	return 0;
}
