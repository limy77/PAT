#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1="",s2="";
    int a=0,tmp=0,r=0;
    cin >> s1>>a;
    for (int i = 0;i<s1.length();++i)
    {
        tmp = tmp * 10 +  s1[i] - '0';
	if (tmp/a == 0 && i ==0 )
        {
            r = tmp;
            continue;
        }
        s2.append(to_string(tmp/a));
        tmp = tmp%a;
        if (i == s1.length()- 1)
        {
            r = tmp  % a;
        }
    }
    if (s2.empty())  s2.append("0");
    cout << s2 <<" "<<r;
    return 0;
}
