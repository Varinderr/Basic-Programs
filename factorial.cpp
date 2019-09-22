#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int fact=1,num,i;
	cout<<"enter number";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
			cout<<"factorial of "<<num<<" is "<<fact<<endl;

	getch();
}