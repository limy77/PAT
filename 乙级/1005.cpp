#include<vector>
#include<algorithm>
#include<Windows.h>
#include<iostream>
using namespace std;
int calc(int m, vector<int>& v_result, vector<int>& v_process)
{
	vector<int>::iterator it = find(v_process.begin(), v_process.end(), m);
	if (it != v_process.end())
	{
		return 0;
	}
	v_result.push_back(m);
	while (m != 1)
	{
		if (m % 2 == 0)
		{
			m = m / 2;
		}
		else
		{
			m = (3 * m + 1) / 2;
		}
		v_process.push_back(m);
	}

	return 0;
}
int main()
{
	int n = 0,m=0;
	cin >> n;
	vector<int> v_result,v_process;
	while (n--)
	{
		cin >> m;
		calc(m, v_result, v_process);
	}
	for (vector<int>::iterator it = v_result.begin(); it != v_result.end(); )
	{
		vector<int>::iterator it1 = find(v_process.begin(), v_process.end(), *it);
		if (it1 != v_process.end())
		{
			it = v_result.erase(it);
		}
		else
		{
			++it;
		}
	}
	sort(v_result.begin(), v_result.end());

	for (vector<int>::reverse_iterator it = v_result.rbegin(); it != v_result.rend(); ++it)
	{
		cout << *it;
		if (it != --v_result.rend())
		{
			cout << " ";
		}
	}
	system("pause");
	return 0;
}