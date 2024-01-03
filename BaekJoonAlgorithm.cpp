#include <bits/stdc++.h>
using namespace std;

int m[101];
int a, b, c;
int bm, em;
int sum;

int main() 
{
	cin >> a >> b >> c;
	for (int i = 0; i < 3; ++i)
	{
		cin >> bm >> em;
		for (int j = bm; j < em; ++j) m[j]++;
	}

	for (int i = 1; i < 101; ++i)
	{
		if (m[i] == 1) sum += 1 * a;
		else if (m[i] == 2) sum += 2 * b;
		else if(m[i] == 3) sum += 3 * c;
	}

	cout << sum << endl;

	return 0;
}
