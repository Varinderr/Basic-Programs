#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n=0,result=0;
	cout<<"enter number";
	cin>>n;
	int temp=0,rev=0;
	while(n!=0)
		{
		temp=n%10;
		rev=rev*10+temp;
		n=n/10;
		}
	cout<<"reversed numbers:"<<rev;
	getch();
}
