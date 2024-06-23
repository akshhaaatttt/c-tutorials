#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"ENTER three integer numbers A B C"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if (a>c)
        {
            cout<<"A is greatest";

        }
        else
        {
            cout<<"c is greatest";
        }
        
    }
    else
    {
        if(b>c)
        {
            cout<<"B is greatest";
        }
        else
        {
            cout<<"c is greatest";
        }
        
    }
    
    
    return 0;
}