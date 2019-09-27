#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[3];
	arr[0]=1;
	arr[1]=2;
	arr[2]=3;
	int arr_new[3];

	for(int i=2,j=0;i>-1,j<3;i--,j++)
	{
		arr_new[j]=arr[i];

	}
	for(int j=0;j<3;j++)
	{
		cout<<arr_new[j];
	}
	getch();
}