#include<iostream>
#include<Windows.h>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string s = "", tmp = "";
	int n = 0;
	vector<int> v,r;
	getline(cin, s);
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '\n')
		{
			break;
		}
		else if (s[i] != ' ')
		{
			tmp += s[i];
		}
		if (s[i] == ' ')
		{
			n = atoi(tmp.c_str());
			v.push_back(n);
			tmp = "";
		}	
	}
	n = atoi(tmp.c_str());
	v.push_back(n);
	int n1 = 0, n2 = 0;
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		n1 = *it;
		++it;
		if (it != v.end())
		{
			n2 = *it;
		}
		else
		{
			return 0;
		}
		if (n2 == 0)
		{
			r.push_back(0);
			r.push_back(0);
			continue;
		}
		else
		{
			r.push_back(n1*n2);
			r.push_back(--n2);
		}
	}
	for (vector<int>::iterator rit = r.begin(); rit != r.end(); ++rit)
	{
		cout << *rit;
		if (rit != --r.end())
		{
			cout << " ";
		}
	}
	system("pause");
	return 0;
}