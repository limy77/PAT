#include<iostream>
#include<Windows.h>
#include<vector>
#include<map>

using namespace std;
/*
输入格式：
	输入第一行给出 3 个正整数，分别为：
	N（≤100000），即考生总数；L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；
	H（ < 100），为优先录取线——德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；
	才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；
	德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；
	其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。
	随后 N 行，每行给出一位考生的信息，包括：准考证号 德分 才分，其中准考证号为 8 位整数，德才分为区间[0, 100] 内的整数。数字间以空格分隔。
输出格式：
	输出第一行首先给出达到最低分数线的考生人数 M，随后 M 行，每行按照输入格式输出一位考生的信息，考生按输入中说明的规则从高到低排序。
	当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。
	*/
int main()
{
	int N = 0, L = 0, H = 0 ;
	cin >> N >> L >> H;
	int zkzh = 0, grade_de = 0, grade_cai = 0, grade_sum = 0;
	map<int, map<int, int>> m_res;
	map<int, int> m1, m2, m3, m4,m_d;
	while (N--)
	{
		cin >> zkzh >> grade_de >> grade_cai;
		m_d.insert(pair<int,int>(grade_de,grade_cai));
		m_res.insert(pair<int, map<int, int>>(zkzh,m_d));
		m_d.clear();
		grade_sum = grade_cai + grade_de;
		if (grade_cai < L || grade_de < L)
		{
			continue;
		}
		if (grade_cai >= H && grade_de >= H)
		{
			m1.insert(pair<int, int>(grade_sum, zkzh));
		}
		else if (grade_cai < H && grade_de >= H)
		{
			m2.insert(pair<int, int>(grade_sum, zkzh));
		}
		else if (grade_cai < H && grade_de < H && grade_de >= grade_cai)
		{
			m3.insert(pair<int, int>(grade_sum, zkzh));
		}
		else
		{
			m4.insert(pair<int, int>(grade_sum, zkzh));
		}
	}
	cout << m1.size() + m2.size() + m3.size() + m4.size() << endl;
	
}