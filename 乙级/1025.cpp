#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<Windows.h>
using namespace std;
struct node {
	int addr;
	int data;
	int next;
};
int main()
{
	int n, k, faddr;
	scanf("%d %d %d", &faddr, &n, &k);
	vector<node>v1, v2;
	v1.reserve(100000);//Ԥ���ռ� 
	node t;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &t.addr, &t.data, &t.next);
		v1[t.addr] = t;
	}
	int realnum = 0;
	for (int i = faddr; i != -1; i = v1[i].next)
	{//��˳���ȡ�ڵ㣬��ͳ�������������ϵĽڵ��� 
		v2.push_back(v1[i]);
		realnum++;
	}
	for (int i = 0; i < realnum / k; i++)
		reverse(v2.begin() + i * k, v2.begin() + i * k + k);//��ת 
	for (int i = 0; i < realnum; i++)
	{
		if (i != realnum - 1)//��ת��ԭ���ڵ��nextʧЧ����ͨ��i+1��������һ�ڵ��addr 
			printf("%05d %d %05d\n", v2[i].addr, v2[i].data, v2[i + 1].addr);
		else
			printf("%05d %d -1\n", v2[i].addr, v2[i].data);
	}
	system("pause");
	return 0;
}