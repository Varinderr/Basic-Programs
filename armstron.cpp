#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
  int orig, num, rem, sum = 0;
  cout << "Enter a positive  integer: ";
  cin >> orig;
  num = orig;
  while(num != 0)
  {
      rem = num % 10;
      sum = sum+(rem * rem * rem);
      num = num/10;
  }
  if(sum == orig)
    cout << orig << " is an Armstrong number.";
  else
    cout << orig << " is not an Armstrong number.";
getch();
}