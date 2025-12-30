#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number for print multiplication=";
    cin>>a;
    for(int i=1;i<=10;i++){
        cout<<a<<"*"<<i<<"="<< a*i<<"\n";
    }
}