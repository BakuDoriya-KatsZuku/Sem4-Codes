// Selection Sort
#include <bits/stdc++.h>
using namespace std;

#define int long long

void printarr (int a[], int n)
{
	cout << "[";
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
		if (i != n - 1)
		{
			cout << ", ";
		}
	}
	cout << "]\n";

	return;
}

int32_t main(void)
{
	int n = 0;
	cout << "Number of Elements: ";
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Element " << (i + 1) << ": ";
		cin >> a[i];
	}

	cout << "\nInitial Array: ";
	printarr(a, n);

	int minidex = 0;
	for (int i = 0; i < n - 1; i++)
	{
		minidex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[minidex])
			{
				minidex = j;
			}
		}

		swap(a[i], a[minidex]);
	}

	cout << "Sorted Array: ";
	printarr(a, n);
}

/*
Best Case: omega(n^2)
Average Case: theta(n^2)
Worst Case: O(n^2)

Space Complexity: O(1)
*/