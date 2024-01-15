#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[15004];

int main()
{
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[i] + arr[j] == m) cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}
