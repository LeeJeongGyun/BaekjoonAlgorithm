#include <bits/stdc++.h>
using namespace std;

int cnt[30];
int oddCnt;
char mid, ch;
int main() 
{
	string ret;
	string s;
	cin >> s;
	for (char temp : s) cnt[temp - 'A']++;
	
	for (ch = 'Z'; ch >= 'A'; --ch)
	{
		if (cnt[ch - 'A'] & 1)
		{
			oddCnt++;
			cnt[ch - 'A']--;
			mid = ch;
		}
		if (oddCnt == 2) break;
		for (int i = 0; i < cnt[ch - 'A']; i +=2 )
		{
			ret = ch + ret;
			ret += ch;
		}
	}

	if (mid) ret.insert(ret.begin() + ret.size() / 2, mid);
	if (oddCnt == 2) cout << "I'm Sorry Hansoo\n";
	else cout << ret << endl;

	return 0;
}
