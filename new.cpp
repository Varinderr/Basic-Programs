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
	cout<<"new array: ";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}

	int a;
	cout<<"enter value you want to delete"<<endl;
	cin>>a;

	int counter=0;
	int present=0;

	for(int i=0;i<10;i++)
	{
		if(arr[i]==a)
		{
			present=1;
			counter=counter+1;	
		}
	}
	int counter2;
	counter2=counter;
	if(present==1)// element is present or not
	{
		for(int k=counter;k>0;k--) //used for repitative elements
		{
			for(int i=0;i<10;i++)//traverse whole array
			{
				if(arr[i]==a)//comparing array element with element
				{
					for(int j=i;j<9;j++)
					{
						arr[j]=arr[j+1];
					}
				}
			}
		}
	}

	else
	{
		cout<<"not found.";
	}

for(int i=0;i<10-counter2;i++)
{
	cout<<arr[i];
}
	getch();
}
