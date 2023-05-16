#include <bits/stdc++.h>
using namespace std;

#define int long long

string x(string a, string b, int n)
{
	string answer = "";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == b[i])
		{
			answer += "0";
		}
		else
		{
			answer += "1";
		}
	}

	return answer;
}

string division(string divisor, string dividend)
{
	int dsl = divisor.size();
	int ddl = dividend.size();

	string s = dividend.substr(0, dsl);

	string z = "";
	for (int i = 0; i < dsl; i++)
	{
		z += "0";
	}

	for (int i = dsl; i < ddl; i++)
	{
		if (s[0] == '0')
		{
			s = x(s, z, dsl) + dividend[i];
		}
		else
		{
			s = x(s, divisor, dsl) + dividend[i];
		}
		
		s = s.substr(1, dsl);
	}

	if (s[0] == '0')
	{
		s = x(s, z, dsl);
	}
	else
	{
		s = x(s, divisor, dsl);
	}

	s = s.substr(1, dsl);
	return s;
}

int32_t main(void)
{
	string data;
	cout << "Data: ";
	cin >> data;
	string key;
	cout << "Key: ";
	cin >> key;

	int dl = data.size();
	int kl = key.size();

	string tempdata = data;
	for (int i = 1; i < kl; i++)
	{
		tempdata += "0";
	}

	string s = division(key, tempdata);
	string answer = data + s;
	cout << "Remainder: " << s << "\nEncoded Message: " << answer << "\n";

	s = division(key, answer);
	int flag = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1')
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		cout << "There is error in the message recieved.\n";
	}
	else
	{
		cout << "The message recieved is error free.\n";
	}
}