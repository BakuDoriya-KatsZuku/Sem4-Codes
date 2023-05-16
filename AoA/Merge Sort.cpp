// Merge Sort
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

void merge(int a[], int left, int right)
{
	int half = (left + right) / 2;
	int l[half - left + 1];
	int r[right - half];

	for (int i = left; i <= half; i++)
	{
		l[i - left] = a[i];
	}
	for (int i = half + 1; i <= right; i++)
	{
		r[i - (half + 1)] = a[i];
	}

	int i = 0;
	int j = 0;
	int k = left;
	while (k <= right && i < half - left + 1 && j < right - half)
	{
		if (l[i] < r[j])
		{
			a[k] = l[i];
			i++;
		}
		else
		{
			a[k] = r[j];
			j++;
		}

		k++;
	}

	while (i < half - left + 1)
	{
		a[k] = l[i];
		i++;
		k++;
	}
	while (j < right - half)
	{
		a[k] = r[j];
		j++;
		k++;
	}
}

void mergesort(int a[], int left, int right)
{
	if (left < right)
	{
		int half = (left + right) / 2;

		mergesort(a, left, half);
		mergesort(a, half + 1, right);
		
        merge(a, left, right);
	}
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

	mergesort(a, 0, n - 1);

	cout << "Sorted Array: ";
	printarr(a, n);
}

/*
Best Case: omega(nlogn)
Average Case: theta(nlogn)
Worst Case: O(nlogn)

Space Complexity: O(n)
*/