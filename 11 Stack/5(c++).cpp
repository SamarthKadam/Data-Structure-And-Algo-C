#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
};
class Stack{
	private:
    Node *top;////priavate is available only till this block of function
    public:
    Stack(){top=NULL;};
    void push(int x);
    int pop();
    void display();
	};
	
	void Stack::push(int x)
	{
		Node *t=new Node;
		if(t==NULL)
		{
			cout<<"Stack overflow\n"<<endl;
		}
		else{
			t->data=x;
			t->next=top;
			top=t;
		}
	}
	int Stack::pop()
	{
		Node *t;
		int x=-1;
		if(top==NULL)
		{
			cout<<"Stack is empty"<<endl;
		}
		else{
			x=top->data;
			t=top;
			top=top->next;
			delete t;
		}
		return x;
	}
	void Stack::display()
	{
		Node *p=top;
		while(p!=NULL)
		{
			cout<<p->data<<endl;
			p=p->next;
		}	
  }

int main()
{
	Stack stk;
	stk.push(1);
	stk.push(23);
	stk.push(29);
	stk.display();
	cout<<stk.pop()<<endl;
	cout<<stk.pop()<<endl;
	
	return 0;
	
}
