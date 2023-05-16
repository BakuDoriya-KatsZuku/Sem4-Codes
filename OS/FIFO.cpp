// FIFO
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(void)
{
    int frames = 0;
    cout << "Number of frames: ";
    cin >> frames;
    string s;
    cout << "Input String: ";
    cin >> s;

    unordered_set<char> se;
    char a[frames];

    int pointer = 0;
    int n = s.size();
    int fault = 0;
    int hit = 0;
    for (int i = 0; i < n; i++)
    {
        if (se.find(s[i]) == se.end())
        {
            fault++;
            if (se.size() < frames)
            {
                se.insert(s[i]);
                a[pointer] = s[i];
                pointer = (pointer + 1) % frames;
                continue;
            }

            se.erase(a[pointer]);
            a[pointer] = s[i];
            pointer = (pointer + 1) % frames;
        }
        else
        {
            hit++;
        }
    }

    cout << "Faults: " << fault << "\nHits: " << hit << "\n";
}
