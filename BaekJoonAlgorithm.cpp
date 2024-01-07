#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	string suf, pre, s, pat;
	cin >> n;
	cin >> pat;

	int pos = pat.find("*");
	pre = pat.substr(0, pos);
	suf = pat.substr(pos + 1); // 마지막까지 추출

	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		if (pre.size() + suf.size() > s.size())
		{
			cout << "NE" << endl;
			continue;
		}

		if (s.substr(0, pre.size()) == pre && s.substr(s.size() - suf.size()) == suf)
		{
			cout << "DA" << endl;
		}
		else
		{
			cout << "NE" << endl;
		}
	}

	return 0;
}
