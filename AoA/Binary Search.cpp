// Binary Search
#include <bits/stdc++.h>
using namespace std;

#define int long long

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
	int s = 0;
	cout << "Element to Search: ";
	cin >> s;

	int left = 0;
	int right = n - 1;
	int index = -1;
	while (left <= right)
	{
		int half = (left + right) / 2;

		if (a[half] == s)
		{
			index = half;
			break;
		}
		else if (a[half] < s)
		{
			left = half + 1;
		}
		else
		{
			right = half - 1;
		}
	}

    cout << "\nResult\n";
	if (index == -1)
	{
		cout << "Element not found\n";
	}
	else
	{
		cout << "Element found at index: " << (index + 1);
	}
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/