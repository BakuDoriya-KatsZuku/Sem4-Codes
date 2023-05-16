#include <bits/stdc++.h>
using namespace std;

#define int long long

typedef struct Edge
{
	int source;
	int destination;
	int weight;
};

int32_t main(void)
{
	int v = 0;
	cin >> v;
	int m[v][v];
	int source = 0;
	cin >> source;
	int e = 0;
	int distance[v];
	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < v; j++)
		{
			cin >> m[i][j];
			if (m[i][j] != 0)
			{
				e++;
			}
		}
		distance[i] = INT_MAX;
	}

	Edge edges[e];
	int count = 0;
	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < v; j++)
		{
			if (m[i][j] != 0)
			{
				edges[count].source = i;
				edges[count].destination = j;
				edges[count].weight = m[i][j];
				count++;
			}
		}
	}

	distance[source] = 0;

	for (int i = 1; i < v; i++)
	{
		for (int j = 0; j < e; j++)
		{
			if (distance[edges[j].source] != INT_MAX && distance[edges[j].source] + edges[j].weight < distance[edges[j].destination])
			{
				distance[edges[j].destination] = distance[edges[j].source] + edges[j].weight;
			}
		}
	}

	for (int i = 0; i < e; i++)
	{
		if (distance[edges[i].source] != INT_MAX && distance[edges[i].source] + edges[i].weight < distance[edges[i].destination])
		{
			cout << "Contains Negative Cycles.\n";
			return 0;
		}
	}

	for (int i = 0; i < v; i++)
	{
		cout << i << ": " << distance[i] << "\n";
	}
}