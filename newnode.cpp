#include <iostream>
#include <conio.h>
#include <stdio.h> 
#include <stdlib.h>
using namespace std;
struct node
{
	int data;
	node *next;
};
struct node *head= NULL;

void insertbegin(int d)
 {
 	node *temp=new node();
 	if(head==NULL)
 	{
 		temp-> data=d;
 		temp->next=NULL;
 		head=temp;
 	}
 	else
 	{
 		temp->data=d;
 		temp->next=head;
 		head=temp;
 	}
 }
void insertend()
{
	int d;
	cout<<"enter value to insert at the end:";
	cin>>d;
	node *temp= new node();
	temp->data=d;
	temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			node *ptr=head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
}
void show()
{
	node *ptr= head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
}
void clrscr()
 {
  #ifdef WINDOWS
  system("cls");
  #endif
  #ifdef LINUX
  system("clear");
  #endif
 }

int main()
{
    clrscr();
    int choice;
    while(1)
     {
       cout<<"\n";
       cout<<"1.Insert into list at begning"<<endl;
       cout<<"2.Insert into list at end"<<endl;
       cout<<"3.show list"<<endl;
       cout<<"4.Exit"<<endl;
       cin>>choice;

    switch(choice)
     {
		case 1: int d;
          cout <<"Enter the value to insert: ";
          cin>>d;
  			insertbegin(d);
		break;
		case 2:insertend();
		break;
		case 3:show();
		break;
		case 4:exit(1);
		break;
		default: cout<<"invalid input"; 
		break;
     }
    }        
    getch();
}