#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

int main()
{
	int a = 0, b = 0, d = 0;
	cin >> a >> b >> d;
	int sum = a + b;
	string s = "";
	while (sum != 0)
	{
		s.append(to_string(sum % d));
		sum = sum / d;
	}
	//cout << "s=" << s << endl;
	
	int len = s.length();
	//cout << "s.length()=" << len << endl;
	for (int i = 0; i < len; ++i)
	{
		//if ((s[len - i - 1] - '0') < d)
		{
			cout << s[len - i - 1];
		}
		//else
		{
		//	cout << "10";
		}
	}
	if (len == 0) {
		cout << '0';
	}
	system("pause");
	return 0;
}