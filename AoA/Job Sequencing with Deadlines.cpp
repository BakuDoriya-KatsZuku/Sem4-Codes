// Job Sequencing with Deadlines
#include <bits/stdc++.h>
using namespace std;

#define int long long

typedef struct job
{
	int number;
	int profit;
	int deadline;
};

bool compare(job a, job b)
{
	return (a.profit > b.profit);
}

int32_t main(void)
{
	int n = 0;
	cout << "Number of Jobs: ";
	cin >> n;
	job a[n];
	int maxd = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Job " << (i + 1) << "\n";
		a[i].number = i + 1;
		cout << "\tProfit: ";
		cin >> a[i].profit;
		cout << "\tDeadline: ";
		cin >> a[i].deadline;
		if (a[i].deadline > maxd)
		{
			maxd = a[i].deadline;
		}
	}

	sort(a, a + n, compare);
	int sequence[maxd];
	memset(sequence, 0, sizeof(sequence));

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (sequence[a[i].deadline - 1] == 0)
		{
			sequence[a[i].deadline - 1] = a[i].number;
			sum += a[i].profit;
			continue;
		}

		int j = a[i].deadline - 1;
		while (j >= 0 && sequence[j] != 0)
		{
			j--;
		}
		if (j >= 0)
		{
			sequence[j] = a[i].number;
			sum += a[i].profit;
		}
	}

	cout << "\nMaximum Profit: " << sum << "\n";
	cout << "Maximum Profit Sequence: ";
	for (int i = 0; i < maxd; i++)
	{
		cout << "Job " << sequence[i];
		if (i != maxd - 1)
		{
			cout << ", ";
		}
	}
}

/*
Time Complexity: O(n^2)
Space Complexity: O(n^2)
*/