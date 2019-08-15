#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int main()
{
	string s = "", z = "", x = "";
	int dian = 0;
	cin >> s;
	int num_pow = 0;
	for (int i = 1; i < s.length(); ++i)
	{
		if (s[i] == '.')
		{
			z = s.substr(1, i - 1);
			dian = i+1;
		}
		else if (s[i] == 'E')
		{
			x=s.substr(dian, i -dian);
			num_pow = atoi(s.substr(i + 1).c_str());
		}
	}
	//cout << "z=" << z << endl;
	//cout << "z.length" << z.length() << endl;
	//cout << "x=" << x << endl;
	//cout << "x.length=" << x.length() << endl;
	//cout << "num_pow= " << num_pow << endl;
	if (s[0] == '-')
	{
		cout << '-';
	}
	if (num_pow >= 0)
	{
		cout <<z;
		int j = num_pow - x.length();
		if (j >= 0)
		{
			cout << x;
			while (j--)
			{
				cout << '0';
			}
		}
		else
		{
			cout << x.substr(0, num_pow)<<'.'<<x.substr(num_pow);
		}
	}
	else
	{
		int k = num_pow + z.length();
		if (k >= 0)
		{
			cout << z.substr(0, k) << '.' << z.substr(k);
		}
		else
		{
			cout << "0.";
			while (k ++)
			{
				cout << '0';
			}
			cout << z;
		}
		cout << x;
	}

	system("pause");
	return 0;
}