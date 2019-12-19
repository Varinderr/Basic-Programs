#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n,k;//i=rows,n=no of rows, j=space,k=star
	cout<<"enter number of rows:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	getch();
}