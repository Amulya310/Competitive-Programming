#include<iostream>
using namespace std;
#define MAX 100
class Stack
{
	int top;
public:
	int a[MAX];
	Stack()
	{
		top=-1;
	}
	bool push (int x);
	int pop();
	bool isEmpty();

};

bool Stack::push(int x)
{
	if(top>=MAX)
	{
		return false;
	}
	else
	{
		a[++top]= x;
	}
}

int Stack::pop()
{
	if(top<0)
	{
		return 0;
	}
	else
	{
		int x= a[top--];

		return x;
	}
}

bool Stack::isEmpty()
{
	if(top<0)
	return true;
	else
	return false;
}
int main()
{
	Stack s;
	s.isEmpty();
	s.push(10);
	s.push(20);
	s.pop();
	s.push(30);
s.isEmpty();
	cout << s.pop();
	return 0;
}