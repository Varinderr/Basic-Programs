#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int n;
	cout<<"enter the number of rows:";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<" * ";
		}
		cout<<"\n";
	}
	getch();
}