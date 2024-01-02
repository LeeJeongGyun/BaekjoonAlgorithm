#include <bits/stdc++.h>
using namespace std;

vector<int> v(9);
int sum;

int main() {
	
	for (int i = 0; i < 9; ++i)
	{
		cin >> v[i];
	}

	do
	{
		sum = 0;
		for (int i = 0; i < 7; ++i)
		{
			sum += v[i];
		}

		if (sum == 100) break;

	} while (next_permutation(v.begin(), v.end()));

	sort(v.begin(), v.begin() + 7);
	for (int i = 0; i < 7; ++i)
	{
		cout << v[i] << endl;
	}

	return 0;
}
