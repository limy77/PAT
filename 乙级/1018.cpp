#include<iostream>
#include<map>
using namespace std;

int main()
{
	int N=0,win=0,ping=0,lose=0;
	char j,y;
	map<char,int> m_j,m_y;
	m_j.insert(pair<char,int>('C',0));
	m_j.insert(pair<char,int>('J',0));
	m_j.insert(pair<char,int>('B',0));
	m_y.insert(pair<char,int>('C',0));
	m_y.insert(pair<char,int>('B',0));
	m_y.insert(pair<char,int>('J',0));
	cin>>N;
	while(N--)
	{
		cin>>j>>y;
		if(j == y)
		{
			ping++;
		}
		else if ((j == 'C' && y == 'J') ||
			 (j == 'J' && y == 'B') ||
			 (j == 'B' && y == 'C'))
		{
			win++;
		}
		else
		{
			lose++;
		}
		if (j == 'C' && y == 'J')
		{
			m_j['C']++;
		}
		else if (j =='J' && y == 'B')
		{
			m_j['J']++;
		}
		else if (j=='B' && y == 'C')
		{
			m_j['B']++;
		}
		else if ( j =='C' && y == 'B')
		{
			m_y['B']++;
		}
		else if ( j =='B' && y =='J')
		{
			m_y['J']++;
		}
		else if ( j =='J' && y == 'C')
		{
			m_y['C']++;
		}
	}
	cout << win <<" "<<ping << " "<< lose <<endl;
	cout << lose<<" "<<ping << " "<< win <<endl;
	if (m_j['B'] >= m_j['C'] && m_j['B'] >= m_j['J'])
	{
		cout<<'B';
	}
	else if (m_j['C'] >= m_j['J'])
	{
		cout<<'C';
	}
	else
	{
		cout<<'J';
	}
	cout <<" ";
	if (m_y['B'] >= m_y['C'] && m_y['B'] >= m_y['J'])
	{
		cout<<'B';
	}
	else if (m_y['C']>=m_y['J'])
	{
		cout<<'C';
	}
	else
	{
		cout<<'J';
	}
	return 0;
}
