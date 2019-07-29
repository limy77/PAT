#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

int main()
{
	int n = 0, grade = 0, max_grade = 0,min_grade = 100;
	cin >> n;
	string s_max_name="",s_min_name="",s_max_xuehao ="",s_min_xuehao="";
	string s_name = "", s_xuehao = "";
	while (n--)
	{
		cin >> s_name;
		cin >> s_xuehao;
		cin >> grade;
		if (grade > max_grade)
		{
			max_grade = grade;
			s_max_name = s_name;
			s_max_xuehao = s_xuehao;
		}
		if (grade < min_grade)
		{
			min_grade = grade;
			s_min_name = s_name;
			s_min_xuehao = s_xuehao;
		}
		
	}
	cout << s_max_name << " " << s_max_xuehao << endl;
	cout << s_min_name << " " << s_min_xuehao;
	system("pause");
	return 0;
}