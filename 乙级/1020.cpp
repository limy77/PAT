#include<iostream>
#include<Windows.h>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct Node {
	double storage;
	double sum_price;
	double danjia;
};
bool cmp(Node a, Node b)
{
	return a.danjia > b.danjia;
}
int main()
{
	int size = 0, sum = 0, size1 = 0;
	double price = 0.0;
	cin >> size >> sum;
	size1 = size;
	vector<Node> v;
	Node tmp;
	while (size--)
	{
		cin >> tmp.storage;
		v.push_back(tmp);
	}
	size = size1;
	while (size1>0)
	{
		cin >> price;
		v[size - size1].sum_price = price;
		v[size - size1].danjia = price / v[size - size1].storage;
		size1--;
	}
	double total_money = 0.0;
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); ++i)
	{
		//cout << v[i].storage << "  " << v[i].sum_price << " " << v[i].danjia << endl;
		//cout << "sum = " << sum << endl;
		//cout << "total_money = " << total_money << endl;
		if (sum > v[i].storage)
		{
			sum = sum - v[i].storage;
			total_money += v[i].sum_price;
		}
		else if (sum>0 && sum <= v[i].storage)
		{
			double mon = v[i].danjia * sum;
			total_money += mon;
			sum = 0;
			//continue;
		}
		else if (sum == 0 )
		{
			break;
		}
	}
	cout << fixed<<setprecision(2)<< total_money << endl;
	system("pause");
	return 0;
}