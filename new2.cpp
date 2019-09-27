#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 10
class STACK
{
	public:void push();
	public:void pop();
	public:void show();
};

int top=-1;
int tack[MAX];

void STACK::push()
{
	int value;
	cout<<"enter value: ";
	cin>>value;

	if(top<MAX-1)
	{
		tack[top+1]=value;
		top=top+1;
	}
	else
	{
		cout<<"Stack is already full";
	}
}
void STACK::pop()
{
	if(top>-1)
	{
		top=top-1;
	}
	else
	{
		cout<<"Stack is empty.";
	}
}

void STACK :: show()
{
for(int i=top;i>-1;i--)
{
	cout<<tack[i]<<" ";
}
}
int main()
{
	STACK obj;
	int choice;
	while(1)
	{	cout<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. Show"<<endl;
		cout<<"4. Exit"<<endl;
		cin>>choice;
		if(choice==1)
		{
			obj.push();
		}
		else if(choice==2)
		{
			obj.pop();
		}
		else if(choice==3)
		{
			obj.show();
		}
		else if (choice==4)
		{
			exit(1);;
		}
		else
		{
			cout<<"enter valid number.";
		}
	}
	getch();
}