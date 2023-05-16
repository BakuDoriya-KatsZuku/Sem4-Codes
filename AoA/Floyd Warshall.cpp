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
			if (m[i][j] == 0 && i != j)
			{
				m[i][j] = INT_MAX;
			}
		}
	}

	for (int k = 0; k < v; k++)
	{
		for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < v; j++)
			{
				if (m[i][k] != INT_MAX && m[k][j] != INT_MAX && m[i][k] + m[k][j] < m[i][j])
				{
					m[i][j] = m[i][k] + m[k][j];
				}
			}
		}
	}

	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < v; j++)
		{
			if (i != j && m[i][j] == INT_MAX)
			{
				cout << "F ";
			}
			else
			{
				cout << m[i][j] << " ";
			}
		}
		cout << "\n";
	}
}