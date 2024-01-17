#include <bits/stdc++.h>
using namespace std;
int x, y, z;

long long go(long long a, long long b)
{
	if (b == 1) return a % z;
	long long ret = go(a, b / 2);
	ret = (ret * ret) % z;
	if (b % 2 != 0) ret = (ret * a) % z;
	return ret;
}

int main()
{
	cin >> x >> y >> z;
	cout << go(x, y) << endl;

	return 0;
}
