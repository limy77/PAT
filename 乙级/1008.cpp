#include<iostream>
#include<Windows.h>
#include<vector>
using namespace std;

int main()
{
	int m = 0, n = 0;
	cin >> m;
	cin >> n;
	vector<int> arr;
	int i = 0,t=m;
	n = n % m;
	while (t--)
	{
		cin >> i;
		arr.push_back(i);
	}
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;
	for (int j = m-n; j < m; ++j)
	{
		cout << arr[j];
		if(!(n==0&&j==m-1))
		{
			cout << " ";
		}
	}
	for (int k = 0; k < m-n; ++k)
	{
		cout << arr[k];
		if(k!= m-n-1)
		{
			cout << " ";
		}
	}
	system("pause");
	return 0;
}