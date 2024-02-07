
#include <bits/stdc++.h>
using namespace std;

int m, n, k;
int x1, yy1, x2, y2;
int gmap[104][104];
int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };

int cnt;
vector<int> v;

void DFS(int y , int x)
{
	cnt++;
	gmap[y][x] = 1;
	for (int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= m || nx < 0 || nx >= n || gmap[ny][nx] == 1) continue;
		DFS(ny, nx);
	}
}

int main()
{
	cin >> m >> n >> k;

	for (int i = 0; i < k; ++i)
	{
		cin >> x1 >> yy1 >> x2 >> y2;
		for (int yy = yy1; yy < y2; ++yy)
		{
			for (int xx = x1; xx < x2; ++xx)
			{
				gmap[yy][xx] = 1;
			}
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (gmap[i][j] == 0)
			{
				cnt = 0;
				DFS(i, j);
				v.push_back(cnt);
			}
		}
	}

	std::sort(v.begin(), v.end());
	cout << v.size() << endl;
	for (int a : v) cout << a << " ";

	return 0;
}
