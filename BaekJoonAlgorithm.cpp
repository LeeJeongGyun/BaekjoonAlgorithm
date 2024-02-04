
#include <bits/stdc++.h>
using namespace std;

int t;
int m, n, k, x, y;
int gmap[54][54];
int ans;
int dx[] = { 0,1,0,-1 };
int dy[] = { -1,0,1,0 };

void DFS(int y, int x)
{
	for (int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= n || nx < 0 || nx >= m || gmap[ny][nx] == 0) continue;
		gmap[ny][nx] = 0;
		DFS(ny, nx);
	}
}

int main()
{
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> m >> n >> k;
		memset(gmap, 0, sizeof(gmap));
		ans = 0;
		for (int j = 0; j < k; ++j)
		{
			cin >> x >> y;
			gmap[y][x] = 1;
		}

		for (int y = 0; y < n; ++y)
		{
			for (int x = 0; x < m; ++x)
			{
				if (gmap[y][x] == 1)
				{
					gmap[y][x] = 0;
					DFS(y, x);
					ans++;
				}
			}
		}
		
		cout << ans << endl;
	}
	return 0;
}
