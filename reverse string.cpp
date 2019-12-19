#include<iostream>
#include<conio.h>
using namespace std;
void reverse(string& str)
{
	{ 
	int n = str.length(); 
	for (int i = 0; i < n / 2; i++) 
		swap(str[i], str[n - i - 1]); 
}
}
int main()
{
	int n;
	{ 
	string str = "geeks for geeks"; 
	reverse(str); 
	cout << str; 
	getch();
	}
}