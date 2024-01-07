#include <bits/stdc++.h>
using namespace std;


int main() 
{
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); ++i)
	{
		if (isupper(s[i]))
		{
			if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
		else if (islower(s[i]))
		{
			if (s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
	}

	cout << s << endl;
	return 0;
}
