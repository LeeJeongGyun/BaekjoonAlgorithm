#include <bits/stdc++.h>
using namespace std;

int n;
map<int, int> m;
int sum = 0;
int a, b, c;
int bm, em;

int main() 
{
	cin >> a >> b >> c;
	for (int i = 0; i < 3; ++i)
	{
		cin >> bm >> em;

		for (int j = bm; j < em; ++j)
		{
			m[j]++;
		}
	}

	for (auto p : m)
	{
		if (p.second == 1)
		{
			sum += a;
		}
		else if (p.second == 2)
		{
			sum += 2 * b;
		}
		else
		{
			sum += 3 * c;
		}
	}

	cout << sum << endl;
	return 0;
}
