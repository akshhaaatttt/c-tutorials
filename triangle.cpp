#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"enter three sides of triangle ";
    cin>>n1>>n2>>n3;
    if(n1+n2>n3 && n2+n3>n1 && n3+n1>n2)
    {
        cout<<"the sides are of triangle";
    }
    else
    {
        cout<<"not a triangle";
    }
    
    return 0;
}