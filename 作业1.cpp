#include<iostream>
using namespace std;
typedef struct listnode
{
	int value;
	listnode* next;
}node;
node* creatlist(int a[], int m)
{
	node* phead = new node;
	node* p = phead;
	for (int i = 0; i <= n - 1; i++)
	{
		node* ptemp = new node;
		ptemp->value = a[i];
		ptemp->next = NULL;
		p->next = ptemp;
		p = ptemp;
	}
	return phead;
}
void printlt(node* phead)
{
	node* p = phead;
	p = p->next;
	while (p != NULL)
	{
		cout << p->value << ednl;
		p = p->next;
	}
}
int main()
{
	int a[8] = { 1,2,4,5,6,7,9,1 };
	printlt(creatlist(a[], 8));
	return 0;
}