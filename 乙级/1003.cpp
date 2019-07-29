#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

/*
1 字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
2 任意形如  xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
3 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
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
	//如果P之前A的个数*PT之间A的个数 =T之后A的个数 则符合要求，返回真 
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

