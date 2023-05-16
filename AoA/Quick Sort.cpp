// Quick Sort
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

int partition(int a[], int left, int right)
{
	int pivot = a[left];
	int i = left + 1;
	int j = right;

	while (i <= j)
	{
		while (i <= j && a[i] <= pivot)
		{
			i++;
		}

		while (i <= j && a[j] > pivot)
		{
			j--;
		}

		if (i < j)
		{
			swap(a[i], a[j]);
		}
	}

	swap(a[left], a[j]);
	return j;
}

void quicksort(int a[], int left, int right)
{
	if (left < right)
	{
		int pivot = partition(a, left, right);

		quicksort(a, left, right - 1);
		quicksort(a, left + 1, right);
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

	quicksort(a, 0, n - 1);

	cout << "Sorted Array: ";
	printarr(a, n);
}

/*
Best Case: omega(nlogn)
Average Case: theta(nlogn)
Worst Case: O(n^2)

Space Complexity: O(logn) -> Best and Averager, O(n) -> Worst
*/