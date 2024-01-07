#include <bits/stdc++.h>
using namespace std;


int main() 
{
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == ' ' || isdigit(s[i])) cout << s[i];
		else
		{
			if (isupper(s[i]))
			{
				if (s[i] + 13 >= 91) cout << (char)('A' + (s[i] + 13 - 91));
				else cout << (char)(s[i] + 13);
			}
			else
			{
				if (s[i] + 13 >= 123) cout << (char)('a' + (s[i] + 13 - 123));
				else cout << (char)(s[i] + 13);
			}
		}
	}

	return 0;
}
