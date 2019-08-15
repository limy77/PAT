#include<iostream>
#include<Windows.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s = "";
	cin >> s;
	vector<int> v{0,0,0,0,0,0,0,0,0,0};
	for (int i = 0; i < s.length(); ++i)
	{
		v[(s[i] - '0')]++;
	}
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] > 0)
		{
			cout << i << ':' << v[i] << endl;
		}
	}
	system("pause");
	return 0;
}