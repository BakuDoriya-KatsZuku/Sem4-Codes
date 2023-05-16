// Optimal
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(void)
{
	int frames = 0;
	cout << "Number of Frames: ";
	cin >> frames;
	string s;
	cout << "Input String: ";
	cin >> s;

	map<char, queue<int>> map;
	unordered_set<char> se;
	int n = s.size();
	int fault = 0;
	int hit = 0;

	for (int i = 0; i < n; i++)
	{
		map[s[i]].push(i);
	}

	for (int i = 0; i < n; i++)
	{
		map[s[i]].pop();

		if (se.find(s[i]) == se.end())
		{
			fault++;

			if (se.size() < frames)
			{
				se.insert(s[i]);
				continue;
			}

			char rems;
			int rem = 0;
			for (auto si : se)
			{
				if (map[si].size() == 0)
				{
					rems = si;
					break;
				}

				if (map[si].front() > rem)
				{
					rem = map[si].front();
					rems = si;
				}
			}

			se.insert(s[i]);
			se.erase(rems);
		}
		else
		{
			hit++;
		}
	}

	cout << "Faults: " << fault << "\nHits: " << hit << "\n";
}