#include<iostream>
#include<Windows.h>
#include<string>
#include<map>
using namespace std;
int main()
{
	string s1 = "", s2 = "", s3 = "", s4 = "";
	int len1 = 0, len2 = 0;
	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;
	len1 = s1.length();
	if (len1 > s2.length())
	{
		len1 = s2.length();
	}
	len2 = s3.length();
	if (len2 > s4.length())
	{
		len2 = s4.length();
	}
	map<char, string> m;
	m.insert(pair<char, string>('A', "MON"));
	m.insert(pair<char, string>('B', "TUE"));
	m.insert(pair<char, string>('C', "WED"));
	m.insert(pair<char, string>('D', "THU"));
	m.insert(pair<char, string>('E', "FRI"));
	m.insert(pair<char, string>('F', "SAT"));
	m.insert(pair<char, string>('G', "SUN"));
	bool bFirst = true;
	for (int i = 0; i < len1; ++i)
	{
		if (s1[i] == s2[i] && bFirst && s1[i]>='A' && s1[i] <='G')
		{
			map<char, string>::iterator it = m.find(s1[i]);
			if (it != m.end())
			{
				cout << it->second<< " ";

			}
			else {
				cout << "error!!!!";
			}
			bFirst = false;
			continue;
		}
		if (s1[i] == s2[i] && !bFirst && ((s1[i]>='0' && s1[i]<='9')||(s1[i]>='A' && s1[i]<='N')))
		{
			if (s1[i] <= '9')
			{
				cout << "0";
				cout << (s1[i]) - 48;
			}
			else
			{
				cout << (s1[i]) - 55;
			}
			cout << ":";
			break;
		}
	}
	for (int j = 0; j < len2; ++j)
	{
		if (s3[j] == s4[j] && ((s3[j] >='a' && s3[j] <='z' )||( s3[j]>='A' && s3[j] <='Z')))
		{
			if (j <= 9)
			{
				cout << "0";
			}
			cout << j;
			break;
		}
	}
	system("pause");
	return 0;
}
