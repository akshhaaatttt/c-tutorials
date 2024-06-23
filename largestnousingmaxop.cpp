#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int a,b,c;
   cout<<"enter 1st no.: "<<endl;
   cin>>a;
   cout<<"enter 2nd no.: "<<endl;
   cin>>b;
   cout<<"enter 3rd no.: "<<endl;
   cin>>c;
  /* if (a>b)
   {
    if (a>c)
    {
       cout<<"A is greates";
    }
    else cout<<"C is greatest";
    
   }
   else
    if (b>c)
    {
        cout<<"B is greatest";
    }
    else cout<<"C is greaest";
    
   */
  cout<<"the greatest number is ";
   cout<<max(a,b);//only accept two numbers
}