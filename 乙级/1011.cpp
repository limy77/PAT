#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	int n = 0,i=1;
	cin >> n;
	long long m1, m2, m3;
	while (n--)
	{
		cin >> m1;
		cin >> m2;
		cin >> m3;
		if (m1 + m2 > m3)
		{
			cout << "Case #" << i++ << ": true" << endl;
		}
		else
		{
			cout << "Case #" << i++ << ": false" << endl;
		}
	}
	system("pause");
	return 0;
}