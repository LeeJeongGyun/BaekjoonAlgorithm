#include <bits/stdc++.h>
using namespace std;
int num;

int main()
{
	while (scanf("%d", &num) != EOF)
	{
		int value = 1;
		int ret = 1;
		while (true)
		{
			if (value % num == 0)
			{
				cout << ret << endl;
				break;
			}
			
			value = (value * 10 + 1) % num;
			ret++;
		}
	}

	return 0;
}
