#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>
using namespace std;

int main()
{
	string s;
	vector<string> v_s;
	getline(cin, s);
	cout << "s= " << s << endl;
	string tmp="";
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '\n')
		{
			break;
		}
		else if ( s[i] != ' ')
		{
			tmp += s[i];
		}
		if(s[i] == ' ')
		{
			v_s.push_back(tmp);
			tmp = "";
		}

	}
	v_s.push_back(tmp);
	vector<string>::reverse_iterator it = v_s.rbegin();
	for (; it != v_s.rend(); it++)
	{
		cout << *it;
		if(it != --v_s.rend())
		{
			cout << " ";
		}
	}
	system("pause");
	return 0;
}