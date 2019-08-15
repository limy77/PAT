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
	v1.reserve(100000);//预留空间 
	node t;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &t.addr, &t.data, &t.next);
		v1[t.addr] = t;
	}
	int realnum = 0;
	for (int i = faddr; i != -1; i = v1[i].next)
	{//按顺序获取节点，并统计真正在链表上的节点数 
		v2.push_back(v1[i]);
		realnum++;
	}
	for (int i = 0; i < realnum / k; i++)
		reverse(v2.begin() + i * k, v2.begin() + i * k + k);//反转 
	for (int i = 0; i < realnum; i++)
	{
		if (i != realnum - 1)//反转后，原来节点的next失效，故通过i+1来访问下一节点的addr 
			printf("%05d %d %05d\n", v2[i].addr, v2[i].data, v2[i + 1].addr);
		else
			printf("%05d %d -1\n", v2[i].addr, v2[i].data);
	}
	system("pause");
	return 0;
}