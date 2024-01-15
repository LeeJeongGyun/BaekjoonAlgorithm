#include <bits/stdc++.h>
using namespace std;

int n, m;
set<int> gs;
int num;

int main()
{
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		gs.insert(num);
	}

	int cnt = 0;
	for (int a : gs)
	{
		if (gs.find(m - a) != gs.end()) cnt++;
	}

	cout << cnt / 2 << endl;
	return 0;
}
