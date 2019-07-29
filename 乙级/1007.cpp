#include<iostream>
#include<cmath>
#include<Windows.h>
using namespace std;

bool judeIsPrimeNum(int m)
{
	if (m == 1) 
	{
		return false;
	}
	for (int i = 2; i <= sqrt(m); i++)
	{
		if ( m % i ==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	long long n = 0;
	cin >> n;
	int count = 0;
	if (n %2 == 0)
	{
		n--;
	}
	while (n>1)
	{
		
		if (judeIsPrimeNum(n) && judeIsPrimeNum(n - 2))
		{
			count++;
			cout << "count =  " <<count << endl;
			cout << "n= " << n << endl;
		}
		n = n - 2;
	}
	cout <<count;
	system("pause");
	return 0;
}