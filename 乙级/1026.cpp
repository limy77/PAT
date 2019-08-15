#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

int main()
{
	long long c1, c2;
	cin >> c1 >> c2;
	long long total_sec;
	total_sec = (c2 - c1) / 100;
	if ((c2 - c1) % 100 >= 50)
		total_sec++;
	long long hour = total_sec / 3600;
	int minu = total_sec % 3600 / 60;
	int sec = total_sec % 60;
	if (hour < 10)
		cout << "0";
		
	cout << hour << ":";
	if (minu < 10)
		cout << "0";
	cout << minu << ":";
	if (sec < 10)
		cout << "0";
	cout << sec << endl;
	system("pause");
	return 0;
}