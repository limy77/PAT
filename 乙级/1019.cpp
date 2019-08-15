#include<iostream>
#include<Windows.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> vINT;

int main()
{
	int n = 0, qian = 0, bai = 0, shi = 0, ge = 0, sub = 0;
	cin >> n;
	vINT v;
	if (n == 6174)
	{
		cout << "7641 - 1467 = 6174" << endl;
	}
	while (n != 6174)
	{
		qian = n / 1000;
		bai = n / 100 - qian * 10;
		shi = (n % 100) / 10;
		ge = n % 10;
		v.clear();
		v.push_back(qian);
		v.push_back(bai);
		v.push_back(shi);
		v.push_back(ge);
		sort(v.begin(), v.end());
		n = v[3] * 1000 + v[2] * 100 + v[1] * 10 + v[0];
		sub = v[0] * 1000 + v[1] * 100 + v[2] * 10 + v[3];
		if (n == sub)
		{
			cout << n <<" - "<< sub <<" = 0000" << endl;
			break;
		}
		cout << n << " - ";
		if (sub < 1000 && sub >=100)
		{
			cout << '0';
		}
		else if (sub < 100 && sub >9)
		{
			cout << "00";
		}
		else if (sub < 10)
		{
			cout << "000";
		}
		cout << sub << " = ";
		if (n - sub < 1000 && n - sub >= 100)
		{
			cout << '0';
		}
		else if (n - sub < 100 && n - sub >9)
		{
			cout << "00";
		}
		else if (n - sub < 10)
		{
			cout << "000";
		}
		cout<< n - sub << endl;
		n = n - sub;
	}
	system("pause");
	return 0;
}