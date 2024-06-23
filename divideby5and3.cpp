#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"Number is divisible by both 3 and 5";
    }
    else {
        cout<<"Not divisable by both 5 and 3";
    }
    return 0;
}