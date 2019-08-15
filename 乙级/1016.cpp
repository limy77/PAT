#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1,s2;
    char c1,c2;
    int n1=0,n2=0;
    cin >> s1>>c1>>s2>>c2;
    for (int i = 0;i<s1.length();++i)
    {
        if (s1[i] == c1)
        {
            n1 = n1 * 10 + (c1 - '0');
        }
    }
    for (int j = 0;j < s2.length(); ++j)
    {
        if (s2[j] == c2)
        {
             n2 = n2 * 10 + (c2 - '0'); 
        }
    }
    cout<<n1+n2;
    return 0;
}
