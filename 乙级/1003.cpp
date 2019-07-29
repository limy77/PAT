#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

/*
1 �ַ����б������ P�� A�� T�������ַ��������԰��������ַ���
2 ��������  xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
3 ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a�� b�� c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
AAPAT  AAPAATAA
AAPAATAAAA     PAT  
*/
bool judge(string& s)
{
	bool pExit=false, tExit=false, aExit=false;
	int len = s.length();
	for (int i = 0; i < len; ++i)
	{
		if (s[i] == 'P')
		{
			pExit = true;
		}
		else if (s[i] == 'A')
		{
			aExit = true;
		}else if ( s[i] == 'T')
		{
			tExit = true;
		}
		else
		{
			return false;
		}
	}
	if (!(tExit and pExit and aExit))
		return false;
	int pFirstPos = s.find_first_of("P");
	int tLastPos = s.find_last_of("T");
	for (int i = pFirstPos + 1; i < tLastPos; ++i)
	{
		if (s[i] != 'A')
			return false;
	}
	int n_p = pFirstPos;
	int n_pTot = tLastPos - pFirstPos - 1;
	int n_t = len - tLastPos - 1;
	//���P֮ǰA�ĸ���*PT֮��A�ĸ��� =T֮��A�ĸ��� �����Ҫ�󣬷����� 
	if (n_p * n_pTot == n_t)
	{
		return true;
	}
	return false;
}
int main()
{
	int n = 0;
	cin >> n;
	string s;
	while (n--)
	{
		cin >> s;
		if (judge(s))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		
		system("pause");
	}
	return 0;
}

