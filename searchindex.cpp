#include<iostream>
#include<conio.h>
using namespace std;
int main() {
   int arr[7] = {1,3,5,7,8,5,5};

   int a;
   cout<<"enter element you want to search: ";
   cin>>a;
   int present=0;
   for(int i=0;i<7;i++)
   {
      if(arr[i]==a)
      {
         present=1;
       cout<<i;
      }
   }
if(present==0)
{
   cout<<"not found";
}

   getch();
}