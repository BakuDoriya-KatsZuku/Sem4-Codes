#include <bits/stdc++.h>
using namespace std;

#define int long long

int bintodec(string s)
{
    int answer = 0;
    for (int i = 7; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            answer += (1 << (7 - i));
        }
    }
    
    return answer;
}

int32_t main(void)
{
	string data;
	cout << "Data: ";
	cin >> data;

	int n = data.size();

	string z = "";
	for (int i = 0; i < n % 8; i++)
	{
		z += "0";
	}

	s = z + s;
	n += (n % 8);

	uint checksum = 0;
	for (int i = 0; i < n; i += 8)
	{
		checksum += bintodec(s.substr(i, 8));
	}
	checksum = (~checksum);

	cout << "Checksum: " << bitset<8>(checksum);
}