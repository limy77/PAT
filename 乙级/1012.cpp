#include<iostream>
#include<vector>
#include<iomanip>
#include<Windows.h>

using namespace std;

int main()
{
	int n = 0, t=0,temp = 0, a1 = 0, a2 = 0, a3 = 0, a5 = 0, flag = -1,a4_count = 0;
	double a4_sum = 0.0, a4 = 0.0;
	vector<int> v;
	cin >> n;
	while(n--)
	{
		cin >> temp;
		v.push_back(temp);
	}
	
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		if (*it % 10 == 0)
		{
			a1 += *it;
		}
		else if(*it % 5 == 1)
		{
			
			a2 -= *it * flag;
			flag = -flag;
			t++;
		}
		else if (*it % 5 == 2)
		{
			++a3;
		}
		else if (*it % 5 == 3)
		{
			a4_sum += *it;
			a4_count++;
		}
		else if (*it % 5 ==4)
		{
			a5 = a5 > *it ? a5 : *it;
		}
	}
	if (a1 == 0)
	{
		cout << 'N' << ' ';
	}
	else
	{
		cout << a1 << " ";
	}
	if (t == 0)
	{
		cout << 'N' << ' ';
	}
	else {
		cout << a2 << " ";

	}
	if (a3 == 0)
	{
		cout << 'N' << ' ';
	}
	else {
		cout << a3 << " ";

	}
	
	if (a4_count == 0)
	{
		cout << 'N' << ' ';
	}
	else {
		a4 = a4_sum / a4_count;
		cout << fixed<<setprecision(1)<<a4 << " ";

	}
	if (a5 == 0)
	{
		cout << 'N';
	}
	else {
		cout << a5;

	}
	system("pause");
	return 0;
}