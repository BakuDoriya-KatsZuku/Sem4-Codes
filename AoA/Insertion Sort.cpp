// Insertion Sort
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

	int key = 0;
	int j = 0;
	for (int i = 1; i < n; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = key;
	}

	cout << "Sorted Array: ";
	printarr(a, n);
}

/*
Best Case: omega(n)
Average Case: theta(n^2)
Worst Case: O(n^2)

Space Complexity: O(1)
*/