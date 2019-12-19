#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i, j ,l ,n;
	cout<<"enter number of rows:";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<char(j+65-1)<<" ";
		}
		for(l=i-1;l>=1;l--)
		{
			cout<<char(l+65-1)<<" ";
		}
		cout<<endl;
	}
	getch();
}