#include<iostream>
#include<list>
#include<stack>
#include<memory>
using namespace std;

void print_back(list<int> const *b);
int main()
{
	list<int> a;
	for (int i = 0; i < 10; i++)
	{
		a.push_back(i);
	}
	print_back(&a);
	
	system("pause");
	return 0;
}

void print_back(list<int> const *b)
{
	stack<int> stck;
	list<int>::const_iterator bgn = b->cbegin();

	for (; bgn != b->cend();bgn++)
	{
		stck.push(*bgn);
	}
	for (; !stck.empty();)
	{
		cout << (stck.top()) << endl;
		stck.pop();
	}
}