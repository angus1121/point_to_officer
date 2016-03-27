#include<iostream>
#include<stack>
using namespace std;

template <typename T>  
class  Cqueue
{
public:
	Cqueue(){};
	~Cqueue(){};
	void appendTail(const T& node);
	T deleteHead();
private:
	stack<T> stack1;
	stack<T> stack2;
};
template<typename T>
void Cqueue<T>::appendTail(const T& node)
{
	stack1.push(node);
}
template<typename T>
T Cqueue<T>::deleteHead()
{
	
	if (stack1.empty())
	{
		return NULL;
	}
	T transp;
	while (!stack1.empty())
	{
		transp = stack1.top();
		stack2.push(transp);
		stack1.pop();
	}
	T result = stack2.top();
	stack2.pop();
	while (!stack2.empty())
	{
		transp = stack2.top();
		stack1.push(transp);
		stack2.pop();
	}
	return result;
}

int main()
{
	Cqueue<int> que;
	for (int i = 0; i < 5; i++)
	{
		que.appendTail(i);
	}
	cout << que.deleteHead()<<' ';
	cout << que.deleteHead() << ' ';
	cout << que.deleteHead() << ' ';
	cout << que.deleteHead() << ' ';
	cout << que.deleteHead() << ' ';

	system("pause");
	return 0;
}