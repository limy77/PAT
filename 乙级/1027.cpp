#include<iostream>
#include<Windows.h>
#include<math.h>
using namespace std;
int main()
{
	int n;
	char c;
	cin >> n >> c;
	int t =int(sqrt((n+1)/2)) * 2 - 1;
	for (int i = t; i > 0; i = i - 2)
	{
		for (int k = t - i; k > 0; k = k-2)
		{
			cout << " ";
		}
		for (int j = i; j > 0; j--)
		{
			cout << c;
		}
		//if (i != 1)
			cout << endl;
	}
	for (int i = 1; i < (t+1)/2; i++)
	{
		for (int j = 1; j < t-2*i; j = j + 2)
		{
			cout << " ";
		}
		for (int k = 0; k < 2* i + 1; k++)
		{
			cout << c;
		}
		cout << endl;
	}
	cout << n - (t + 1)*(t + 1) / 2 + 1 << endl;
	system("pause");
	return 0;
}