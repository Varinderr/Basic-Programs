#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter value: ";
		cin>>arr[i];
	}

	int a;
	cout<<"enter number you want to search:";// element to search
	cin>>a;

	int present=0; // present or not
	int counter=0; // element counts
    for(int i=0;i<10;i++)
    {
    	if(arr[i]==a)
    	{
    		present=1;
    		counter=counter+1;
    	}
    }
    int counter2=counter;

    if(present==1)
    {
    	if(counter>1)
    	{ 
    		for(int j=counter;j>1;j--) //while used to perform traversal couter>1 
    		{
    			for(int i=0;i<10;i++) //this use to traverse main array.
    				{
    					if(arr[i]==a) //to compare element.
		    			{
		    			 for(int n=i; n<9; n++) //
							{
								arr[n]=arr[n+1];
							}
    					}
    				}
    		}
    	}
    	else
    	{
    		for(int i=0;i<10;i++)
    		{
    			if(arr[i]== a)
    			{
    				for(int j=i;j<9;j++)
    				{
    					arr[j]=arr[j+1];
    				}
    			}
    		}
    	}
    }
    else if(present==0)
       	cout<<"not found"<<endl;
    }
cout<<"new: ";
for(int i=0;i<10-counter2;i++)
{

	cout<<arr[i];
}

	getch();
}