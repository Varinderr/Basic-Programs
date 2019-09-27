#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter values you want to put in: ";
		cin>>arr[i];
	}
	cout<<"arr[i]";

	int a;
	cout<<"enter value you to search: ";
	cin>>a;

	int counter=0;
	int present=0;

	for(int i=0;i<10;i++)
	{
		if(arr[i] == a)
		{
			present=1;
			counter=counter+1;
		}
	}
	getch();
}
