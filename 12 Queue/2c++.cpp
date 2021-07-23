#include<iostream>
using namespace std;
class Queu{
	private:
	int size;
	int front;
	int rear;
	int *Q;
	
	public:
		Queu()
		{
			front=-1;
			rear=-1;
			Q=new int[size];
		}
		Queu(int size)
		{
			front=-1;
			rear=-1;
			this->size=size;
			Q=new int[this->size];
		}
		
		void enqueu(int x);
		int dequeu();
		void display();
};
void Queu::enqueu(int x)
{
	if(rear==size-1)
	{
		printf("Queu is full\n");
	}
	else{
		rear++;
		Q[rear]=x;
	}
}
int Queu::dequeu()
{
	int x=-1;
	if(front==rear)
	{
		printf("Queu is empty\n");
	}
	else{
	x=Q[front+1];
	front++;
	}
	return x;
}
void Queu::display()
{
	int i;
	for(i=front+1;i<size;i++)
	{
		printf("%d",Q[i]);
		printf("\n");
	}
}
int main()
{
	Queu q(5);
	q.enqueu(10);
	q.enqueu(20);
	q.enqueu(30);
	q.display();
   printf("The first in and first out element is %d",q.dequeu());
	return 0;
}
