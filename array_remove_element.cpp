#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter value in an array: ";
		cin>>arr[i];
	}
	int element;
	int flag=0;
	cout<<"enter element you want to search: ";
	cin>>element;

	
	for(int i=0;i<10;i++)
	{
		if(arr[i]==element)
		{
			for(int j=i;j<9;j++)
			{
				flag=1;
				arr[j]=arr[j+1];
			}
		}
	}
if(flag==1)
{
	for(int i=0;i<9;i++)
	{
		cout<<arr[i];
	}
}
else
{
	cout<<"not found. :(";
}
	getch();
}

