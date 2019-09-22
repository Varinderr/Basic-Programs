#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int t1=0, t2=1, next_term=0,n;
	cout<<"enter a positive number:";
	cin>>n;
	next_term=t1+t2;
	while(next_term<=n)
	{
		cout<<next_term<<",";
		t1=t2;
		t2=next_term;
		next_term=t1+t2;
	}
	getch();
}