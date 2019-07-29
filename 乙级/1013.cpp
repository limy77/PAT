#include<iostream>
#include<Windows.h>
#include<vector>
#include<cmath>
using namespace std;

bool isPrimeNum(int m)
{
	for (int i = 2; i <= sqrt(m); ++i)
	{
		if (m%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int m=0, n=0,s=3;
	cin >> m >> n;
	vector<int> v;
	v.push_back(2);
	int i = 1;
	while (i < n )
	{
		if (isPrimeNum(s))
		{
			v.push_back(s);
			++i;
		}
		s += 2;
	}
	for (int j = m - 1; j < n; ++j)
	{
		cout << v[j];
		if (j < n - 1)
		{
			if ((j - m+2 ) % 10 != 0)
			{
				cout << " ";
			}
			else
			{
					cout << endl;
			}
		}

	}
	system("pause");
	return 0;
}