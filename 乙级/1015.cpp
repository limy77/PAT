#include<iostream>
#include<Windows.h>
#include<vector>
#include<map>

using namespace std;
/*
�����ʽ��
	�����һ�и��� 3 �����������ֱ�Ϊ��
	N����100000����������������L����60����Ϊ¼ȡ��ͷ����ߣ����·ֺͲŷ־������� L �Ŀ��������ʸ񱻿���¼ȡ��
	H�� < 100����Ϊ����¼ȡ�ߡ����·ֺͲŷ־������ڴ��ߵı�����Ϊ���ŵ�ȫ���������࿼�����²��ִܷӸߵ�������
	�ŷֲ������·ֵ��ߵ�һ�࿼�����ڡ���ʤ�š���Ҳ���ܷ����򣬵����ڵ�һ�࿼��֮��
	�²ŷ־����� H�����ǵ·ֲ����ڲŷֵĿ������ڡ��ŵ¼����������С���ʤ�š��ߣ����ܷ����򣬵����ڵڶ��࿼��֮��
	�����ﵽ����� L �Ŀ���Ҳ���ܷ����򣬵����ڵ����࿼��֮��
	��� N �У�ÿ�и���һλ��������Ϣ��������׼��֤�� �·� �ŷ֣�����׼��֤��Ϊ 8 λ�������²ŷ�Ϊ����[0, 100] �ڵ����������ּ��Կո�ָ���
�����ʽ��
	�����һ�����ȸ����ﵽ��ͷ����ߵĿ������� M����� M �У�ÿ�а��������ʽ���һλ��������Ϣ��������������˵���Ĺ���Ӹߵ�������
	��ĳ�࿼�����ж����ܷ���ͬʱ������·ֽ������У����·�Ҳ���У���׼��֤�ŵ����������
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