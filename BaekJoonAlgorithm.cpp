
#include <bits/stdc++.h>
using namespace std;

int gmap[104][104];
int x, y;
int dx[] = { 0,1,0,-1 };
int dy[] = { -1,0,1,0 };
int dis[104][104];

int main()
{
	cin >> y >> x;
	string s;
	for (int i = 1; i <= y; i++)
	{
		for (int j = 1; j <= x; ++j)
		{
			scanf_s("%1d", &gmap[i][j]);
		}
	}

	dis[1][1] = 1;
	queue<pair<int, int>> q;
	q.push({ 1,1 });

	int cy, cx;
	while (!q.empty())
	{
		tie(cy, cx) = q.front(); q.pop();
		if (cy == y && cx == x) break;

		for (int i = 0; i < 4; ++i)
		{
			int ny = cy + dy[i];
			int nx = cx + dx[i];

			if (ny < 1 || ny > y || nx < 1 || nx > x) continue;
			if (gmap[ny][nx] == 0) continue;
			if (dis[ny][nx] > 0) continue;

			dis[ny][nx] = dis[cy][cx] + 1;
			q.push({ ny,nx });
		}
	}

	cout << dis[y][x] << endl;
	return 0;
}
