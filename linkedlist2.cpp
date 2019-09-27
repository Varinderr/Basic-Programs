#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct node
{
	int data;
	node *next;
};
struct node *head=NULL;
void insert_begining(int d)
{	
	node *temp=new node();
	if(head==NULL)
	{
		temp->data=d;
		temp->next=NULL;
		head=temp;
	}
	else
	{
		temp->data=d;
		temp->next=head;
		head=temp;
	}
	return;
}

void insert_end()
{
	int d;
	cout<<"enter value to insert:";
	cin>>d;
	node *temp=new node();
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
	node *ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"=>";
		ptr=ptr->next;
	}

}

void insert_position()
{
	int position,d,counter;
	cout<<"enter position: ";
	cin>>position;

	cout<<"enter data: ";
	cin>>d;

	node *temp=new node();
	temp->data=d;
	node *ptr=head;

	while(ptr!=NULL)
	{
		ptr=ptr->next;
		counter = counter+1;
	}
	if(position>counter)
	{

		cout<<"position does not exist.";
	}
	else if(position==1)
	{
		insert_begining(position);
	}
	else
	{
		node *start=head;
		for(int i=1;i<=position-3&&counter;i++)
		{
			start=start->next;
		}
		node *temp2=new node();
		temp2= start->next;
		temp->next=temp2;
		start->next=temp;
	}
}

void delete_position()
{
	int counter=0, position;
	cout<<"enter position you want to delete: ";
	cin>>position;
	node *ptr=head;
	node *ptr2=head;

	while(ptr2 != NULL)
	{
		ptr2 = ptr2->next;
		counter=counter+1;
	}
	if(position>counter)
	{
		cout<<"please enter valid information.";
	}
	else if(position == 1)
	{
		node *temp = new node();
		temp = head;
		head=temp->next;
	}
	else
	{
		for(int i=1 ; i<=position-2 && i<= counter ; i++)
		{
			ptr=ptr->next;
		}
		node *temp  = new node();
		node *temp2 = new node();
		temp        = ptr->next;
		temp2       = temp->next;
		ptr->next   = temp2;
	}
}
int main()
{
    int choice;
    while(1)
     {
       cout<<"\n";
       cout<<"1.Insert into list at begning"<<endl;
       cout<<"2.Insert into list at end"<<endl;
       cout<<"3.Insert at postion"<<endl;
       cout<<"4.Delete at postion"<<endl;
       cout<<"5.show"<<endl;
       cout<<"6.Exit"<<endl;
       cin>>choice;

    switch(choice)
     {
	case 1: int d;
          cout <<"Enter the value to insert: ";
          cin>>d;
 			insert_begining(d);
	break;
	case 2:insert_end();
	break;
	case 3:insert_position();
	break;
	case 4:delete_position();
	break;
	case 5:show();
	break;
	case 6:exit(1);
	break;
	default: cout<<"invalid input"; 
	break;

     }
    }        

	getch();
}