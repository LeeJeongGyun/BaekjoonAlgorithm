
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str[101];
	::memset(str, 0, sizeof(str));
	cin >> str;

	int ans[26];
	::memset(ans, 0, sizeof(ans));
	for (int i = 0; str[i] != '\0'; ++i)
	{
		ans[str[i] - 'a']++;
	}
	
	for (int i = 0; i < 26; ++i)
	{
		cout << ans[i] << " ";
	}

	return 0;
}
