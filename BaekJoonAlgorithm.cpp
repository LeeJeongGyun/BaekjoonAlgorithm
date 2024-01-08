#include <bits/stdc++.h>
using namespace std;

int n, m;
string input1, input2;
int main() 
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		map<string, int> gmap;
		long long ans = 1;
		cin >> m;
		for (int i = 0; i < m; ++i)
		{
			cin >> input1 >> input2;

			gmap[input2]++;
		}

		for (auto a : gmap)
		{
			ans *= (long long)(a.second + 1);
		}
		--ans;
		cout << ans << endl;
	}

	return 0;
}
