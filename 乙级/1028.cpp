#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

int deal(string s)
{

	string s1 = s.erase(4,1);
	s1 = s1.erase(6, 1);
	return atoi(s1.c_str());
}
int main()
{
	int N,n_valid,max_date = 20140906,min_date = 18140906,date_tmp;
	cin >> N;
	string name, max_name, min_name,date;
	n_valid = N;
	while (N--)
	{
		cin >> name >> date;
		date_tmp = deal(date);
		if (date_tmp > 20140906 || date_tmp < 18140906)
		{
			n_valid--;
		}
		else
		{
			if (date_tmp > min_date)
			{
				min_date = date_tmp;
				min_name = name;
			}
			if (date_tmp < max_date)
			{
				max_date = date_tmp;
				max_name = name;
			}
		}
	}
	
	cout << n_valid;
	if(n_valid > 0)
		cout<< " " << max_name << " " << min_name << endl;
	system("pause");
	return 0;
}