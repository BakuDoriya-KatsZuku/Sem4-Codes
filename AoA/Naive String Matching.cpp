// Naive String Matching
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(void)
{
	string a;
	string b;
	cout << "Text: ";
	cin >> a;
	cout << "Pattern: ";
	cin >> b;
	int as = a.size();
	int bs = b.size();

	std::vector<int> v;
	for (int i = 0; i <= as - bs; i++)
	{
		int flag = 0;
		for (int j = 0; j < bs; j++)
		{
			if (a[i + j] != b[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			v.push_back(i);
		}
	}

	int n = v.size();
	cout << "\nResult\n";
	if (n == 0)
	{
		cout << "Pattern not found";
	}
	else if (n == 1)
	{
		cout << "Pattern found at index: " << v[0];
	}
	else
	{
		cout << "Pattern found at indices: ";
		for (int i = 0; i < n; i++)
		{
			if (i != 0)
			{
				cout << ", ";
			}
			cout << v[i];
		}
	}
}

/*
Time Complexity: O(bs * (as - bs))
Space Complexity: O(1)
*/