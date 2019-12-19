#include<iostream>
#include<conio.h>
using namespace std;

int fibo(int input)
{
	if(input==0 ||input==1)
	{
		return input;
	}
	else
	{
		return fibo(input-1)+fibo(input-2);
	}
}
int main()
{
	int input,j;
	cout<<"enter numbers";
	cin>>input;
	for(int i=1; i<=input;i++)
	{
	int result=fibo(j);
	cout<<result<<" , ";
	j++	;
	}
getch();
}
