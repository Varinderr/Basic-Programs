#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int low,high,flag,temp;
	cout<<"enter two values:";
	cin>>low>>high;

	cout<<"prime number between"<<low<< "and"<<high<< "are:" ;

	while(low<high)
	{
		flag=0;
		for(int i=2; i<=low/2; i++)
		{
			if(low % i ==0)
			{
				flag=1;
				break;
			}
		}
		if(flag == 0)
		{
			cout<<low<< " , ";
		}
		++low;
	}
	getch();
}