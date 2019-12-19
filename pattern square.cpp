#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i, j, n;
	cout<<"enter number of rows:";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	getch();
}