#include<iostream>
using namespace std;
struct queue
{
	stack<int>s1,s2;
	void enqueue(int x)
	{
		while(!s1.empty())
			s2.push(s1.top());
		s1.pop();
		exit(0);
	
	}
	void dequeue()
	{
		int x=s2.top();
		s2.pop();
		return x;
	}
};
int main()
{
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	return 0;
}


