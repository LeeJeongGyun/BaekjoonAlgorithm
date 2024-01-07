#include <bits/stdc++.h>
using namespace std;

int arr[100004];
int n, k;
int sum, gMax = INT_MIN;

int main() 
{
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	for (int i = 0; i < k; ++i) sum += arr[i];
	gMax = sum;

	for (int i = k; i < n; ++i)
	{
		sum += arr[i];
		sum -= arr[i - k];
		if (sum > gMax) gMax = sum;
	}

	cout << gMax << endl;
	return 0;
}
