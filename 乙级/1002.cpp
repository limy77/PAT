#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
using namespace std;

int main()
{
	long long n = 1;
	string s_in = "";
	cin >> s_in;
	int sum = 0;
	for (string::iterator it = s_in.begin(); it != s_in.end(); ++it)
	{
		sum += (*it - '0');
	}

	vector<string> v;
	v.push_back("ling");
	v.push_back("yi");
	v.push_back("er");
	v.push_back("san");
	v.push_back("si");
	v.push_back("wu");
	v.push_back("liu");
	v.push_back("qi");
	v.push_back("ba");
	v.push_back("jiu");
	string s="";
	if (sum == 0)
	{
		cout << "ling";
		return 0;
	}
	while (sum > 0)
	{
		s = v[sum % 10] + s;
		sum = sum / 10;
		if (sum > 0)
		{
			s = " " + s;
		}
		else
		{
			break;
		}
	}
	cout << s;
	system("pause");
	return 0;
}