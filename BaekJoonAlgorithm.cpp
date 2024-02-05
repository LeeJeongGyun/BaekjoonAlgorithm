
#include <bits/stdc++.h>
using namespace std;

int n;
int ori[104][104];
int check[104][104];
int minH = 101, maxH = 0;
int num, ans;

int dx[] = { 0,1,0,-1 };
int dy[] = { -1,0,1,0 };

void DFS(int y, int x, int h)
{
	check[y][x] = 1;
	for (int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= n || nx < 0 || nx >= n || ori[ny][nx] <= h || check[ny][nx] != 0) continue;
		DFS(ny, nx, h);
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> ori[i][j];
			maxH = max(maxH, ori[i][j]);
			minH = min(minH, ori[i][j]);
		}
	}

	for (int h = minH - 1; h <= maxH; ++h)
	{
		memset(check, 0, sizeof(check));

		int total = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (ori[i][j] > h && check[i][j] == 0)
				{
					DFS(i, j, h);
					total++;
				}
			}
		}

		ans = max(ans, total);
	}

	cout << ans << endl;

	return 0;
}
