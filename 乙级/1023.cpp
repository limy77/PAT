#include<iostream>
#include<Windows.h>
#include<vector>

using namespace std;

int main()
{
	vector<int> v(10,0);

	for (int i = 0; i < 10; ++i)
	{
		cin >> v[i];
	}
	for (int i = 1; i < 10; ++i)
	{
		if (v[i] > 0)
		{
			cout << i;
			v[i]--;
			break;
		}
	}
	for (int i = 0; i < 10; ++i)
	{
		while (v[i]--)
		{
			cout << i;
		}
	}
	system("pause");
	return 0;
}