// LRU
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

	unordered_set<char> se;
	std::map<int, char> map1;
	std::map<char, int> map2;
	int n = s.size();
	int fault = 0;
	int hit = 0;

	for (int i = 0; i < n; i++)
	{
		if (se.find(s[i]) == se.end())
		{
			fault++;

			se.insert(s[i]);
			map1[i] = s[i];
			map2[s[i]] = i;

			if (se.size() <= frames)
			{
				continue;
			}

			for (auto m : map1)
			{
				se.erase(m.second);
				map1.erase(m.first);
				break;
			}
		}
		else
		{
			hit++;

			map1[i] = s[i];
			map1.erase(map2[s[i]]);
			map2[s[i]] = i;
		}
	}

	cout << "Faults: " << fault << "\nHits: " << hit << "\n";
}