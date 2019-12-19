#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,gcd,x,y,lcm, temp;
	cout<<"enter two numbers:";
	cin>>x>>y;
	a=x;
	b=y;
	while(b != 0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	gcd=a;
	lcm=x*y/gcd;
	cout << "GCD = " << gcd<<endl;
	cout<< "LCM = "  << lcm<<endl;
	getch();
}

