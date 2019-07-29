#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int bai = n / 100, shi = (n - n / 100 * 100)/10,ge = n%10;
	string s = "";
	while(bai--)
	{
		s+='B';
	}
	while(shi--)
	{
		s += 'S';
	}
	cout << s;
	for (int i = 1; i <= ge; i++)
	{
		cout << i;
	}
	
	system("pause");
	return 0;
}