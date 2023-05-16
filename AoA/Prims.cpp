#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(void)
{
	int v = 0;
	cin >> v;
	int m[v][v];
	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < v; j++)
		{
			cin >> m[i][j];
		}
	}

	int mst[v];
	int visited[v];
	int smallest[v];

	for (int i = 0; i < v; i++)
	{
		smallest[i] = INT_MAX;
		visited[i] = 0;
	}

    smallest[0] = 0;
	mst[0] = -1;

	for (int i = 0; i < v; i++)
	{
		int mini = INT_MAX;
		int minindex = 0;
		for (int j = 0; j < v; j++)
		{
			if (visited[j] == 0 && smallest[j] < mini)
			{
				mini = smallest[j];
				minindex = j;
			}
		}

		visited[minindex] = 1;

		for (int j = 0; j < v; j++)
		{
			if (m[minindex][j] > 0 && visited[j] == 0 && m[minindex][j] < smallest[j])
			{
				smallest[j] = m[minindex][j];
				mst[j] = minindex;
			}
		}
	}

	for (int i = 1; i < v; i++)
	{
		cout << mst[i] << " -> " << i << " : " << m[i][mst[i]] << "\n";
	}
}