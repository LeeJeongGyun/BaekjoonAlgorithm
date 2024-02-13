
#include <bits/stdc++.h>
using namespace std;

int n, c;

int a[1005];
vector<pair<int, int>> v;
map<int, int> mp, mp_first;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
	{
		return mp_first[a.first] < mp_first[b.first];
	}
	else return a.second > b.second;
}

int main()
{
	cin >> n >> c;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
		if (mp_first[a[i]] == 0) mp_first[a[i]] = i + 1;
	}
	
	for (auto& a : mp)
	{
		v.push_back({ a.first, a.second });
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v[i].second; ++j)
		{
			cout << v[i].first << " ";
		}
	}

	return 0;
}
