#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n;
	bool isprime = true; 

	cout<<"enter number"<<endl;
	cin>>n;

	for(i=2; i <= n/2; i++)
{
	if(n % i == 0)
	{
		isprime= false;
		break;
	}
}
if (isprime)
{
	cout<<"this is prime";
}
else
{
cout<<"this isn't prime";
}
	getch();

}
