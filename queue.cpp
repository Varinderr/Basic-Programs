#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define MAX 10
int rear=-1;
int front=-1;
int arr[MAX];

void enqueue()
{
	int a;
	cout<<"enter value";
	cin>>a;
	if(front<MAX-1 && rear<MAX-1)
	{
		if(front==-1 && rear==-1)
		{
			front=front+1;
			rear=rear+1;
			arr[rear]=a;
		}
		else
		{
			rear=rear+1;
			arr[rear]=a;
		}
	}
	else
	{
		cout<<"full.";
	}
}

void dequeue()
{
	if(front>-1&&rear>-1)
	{
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front=front+1;
		}
	}
	else
	{
		cout<<"queue is empty.";
	}
}

void show()
{
	for(int i=rear;i>=front;i--)
	{
		cout<<arr[i];
	}
}


int main()
{
	 
    int choice;
    while(1)
    {
      cout<<"\n";
      cout<<"1.Enter into Queue"<<endl;
      cout<<"2.Delete from Queue"<<endl;
      cout<<"3.Show the Queue"<<endl;
      cout<<"4.exit"<<endl;
      cin>>choice;
      switch(choice)
       {
       	case 1:enqueue();
       	break;
       	case 2:dequeue();
       	break;
       	case 3:show();
       	break;
       	case 4:exit(1);
       	break;
       	default:cout<<"Invalid input"<<endl;
       	break;
       }


    }

}