#include <bits/stdc++.h>
using namespace std;

string s;
string co;

int main() 
{
	cin >> s;
	
	co = s;
	std::reverse(co.begin(), co.end());
	if (co == s) cout << 1 << endl;
	else cout << 0 << endl;
	
	return 0;
}
