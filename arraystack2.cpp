#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
#define Max 10

class STACK
{
	public:void push();
	public:void pop();
	public:void show();
};

int top=-1;
int tack[Max];

void STACK::push()
{
	int value;
	cout<<"Enter value to push:";
	cin>>value;
	if(top<Max-1)
	{
		tack[top+1]=value;
		top=top+1;
	}
	else
	{
		cout<<"Stack is Full.";
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
		cout<<"Stack is Empty.";
	}
}
void STACK::show()
{
	for(int i=top;i>-1;i--)
	{
		cout<<tack[i]<<endl;
	}
}

int main()
{
	int choice;
	STACK obj;
	while(1)
	{
		cout<<"\n";
		cout<<"1. push the value:"<<endl;
		cout<<"2. pop the value:"<<endl;
		cout<<"3. show the value:"<<endl;
		cout<<"4. exit"<<endl;
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
		else if(choice==4)
		{
			exit(1);
		}
		else
			cout<<"enter valid information";
	}
	getch();
}