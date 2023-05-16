// FIFO
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(void)
{
	int frames = 0;
	string s;
	cout << "Number of Frames: ";
	cin >> frames;
	cout << "Input String: ";
	cin >> s;
	char a[frames];
	unordered_set<char> se;

	int hit = 0;
	int fault = 0;
	int n = s.size();
	int count = 0;
	int x = 0;
	while (count < n && x < frames)
	{
		if (se.find(s[count]) == se.end())
		{
			a[x] = s[count];
			se.insert(s[count]);
			fault++;
			x++;
		}
		else
		{
			hit++;
		}
		count++;
	}

	if (count == n)
	{
		return 0;
	}

	int pointer = 0;
	for (int i = count; i < n; i++)
	{
		if (se.find(s[i]) == se.end())
		{
		    se.erase(a[pointer]);
			a[pointer] = s[i];
			se.insert(s[i]);
			pointer = (pointer + 1) % frames;
			fault++;
		}
		else
		{
			hit++;
		}
	}

	cout << "\nHits: " << hit << "\nFaults: " << fault << "\n";
}