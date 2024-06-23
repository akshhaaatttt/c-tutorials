#include<iostream>
using namespace std;

int main(){
    float CP,SP,a,b;
    cout<<"Enter the cost price of the product: ";
    cin>>CP;
    cout<<"Enter the Selling price of the product: ";
    cin>>SP;
    if (CP>SP)
    cout<<"loss is: "<<CP-SP;
   else if (CP<SP)
    cout<<"Profit is: "<<SP-CP;    
    else 
    cout<<"No Profit No Loss";    
    
    return 0;
}